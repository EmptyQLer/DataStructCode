
/*
#include <stdio.h>
#include <stdbool.h>

#define NUM_PROCESSES 4
#define NUM_RESOURCES 3

// 进程最大需求矩阵
int max[NUM_PROCESSES][NUM_RESOURCES] = {
        {7, 5, 3},
        {3, 2, 2},
        {9, 0, 2},
        {2, 2, 2}
};

// 分配矩阵，表示当前已分配给每个进程的资源数
int allocation[NUM_PROCESSES][NUM_RESOURCES] = {
        {0, 1, 0},
        {2, 0, 0},
        {3, 0, 2},
        {2, 1, 1}
};

// 需求矩阵，表示每个进程还需要的资源数
int need[NUM_PROCESSES][NUM_RESOURCES];
int available[NUM_RESOURCES]; // 当前可用资源数

// 初始化need矩阵和available数组
void initialize() {
    for (int i = 0; i < NUM_PROCESSES; i++) {
        for (int j = 0; j < NUM_RESOURCES; j++) {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }
    available[0] = 3;
    available[1] = 3;
    available[2] = 2; // 假设初始可用资源为(3, 3, 2)
}

// 检查是否有安全序列存在
bool isSafe() {
    int work[NUM_RESOURCES], finish[NUM_PROCESSES], count = 0;

    for (int i = 0; i < NUM_RESOURCES; i++) work[i]  = available[i];
    for (int i = 0; i < NUM_PROCESSES; i++) finish[i] = 0;

    while (count < NUM_PROCESSES) {
        int found = 0;
        for (int p = 0; p < NUM_PROCESSES; p++) {
            if (!finish[p]) {
                int j;
                for (j = 0; j < NUM_RESOURCES; j++)
                    if (need[p][j] > work[j])
                        break;
                if (j == NUM_RESOURCES) { // 如果当前进程的需求不超过现有资源
                    for (j = 0; j < NUM_RESOURCES; j++)
                        work[j] += allocation[p][j]; // 归还资源
                    finish[p] = 1;
                    count++;
                    found = 1;
                }
            }
        }
    }

    return (count == NUM_PROCESSES);
}

// 请求资源的函数
bool requestResources(int processId, int request[]) {
    for (int i = 0; i < NUM_RESOURCES; i++) {
        if (request[i] > need[processId][i]) {
            printf("进程 %d 的资源请求超出其最大需求。\n", processId);
            return false;
        }
        if (request[i] > available[i]) {
            printf("进程 %d 的资源请求无法满足，因为资源不足。\n", processId);
            return false;
        }
    }

    // 更新available和allocation矩阵，模拟分配资源
    for (int i = 0; i < NUM_RESOURCES; i++) {
        available[i] -= request[i];
        allocation[processId][i] += request[i];
        need[processId][i] -= request[i];
    }

    // 检查新的状态是否安全
    return isSafe();
}


int main() {
    //初始化need矩阵和 available资源量数组
    initialize();

    //检查当前状态是否安全
    printf("初始化后系统状态：\t");
    if (isSafe()) {
        printf("安全\n");
    } else {
        printf("不安全\n");
    }

    // 举例  进程2请求(1, 0, 2)资源
    int request[] = {1, 0, 2};
    if (requestResources(2, request)) {
        printf("进程2资源请求成功。\n");
        // 进程执行完毕后，释放资源
    } else {
        printf("进程2资源请求失败。\n");
    }

    printf("资源释放后系统状态：\t");
    if (isSafe()) {
        printf("安全\n");
    } else {
        printf("不安全\n");
    }

    return 0;
}

 */