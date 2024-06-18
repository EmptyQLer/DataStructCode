
/*
#include <stdio.h>
#include <stdbool.h>

#define NUM_PROCESSES 4
#define NUM_RESOURCES 3

// ��������������
int max[NUM_PROCESSES][NUM_RESOURCES] = {
        {7, 5, 3},
        {3, 2, 2},
        {9, 0, 2},
        {2, 2, 2}
};

// ������󣬱�ʾ��ǰ�ѷ����ÿ�����̵���Դ��
int allocation[NUM_PROCESSES][NUM_RESOURCES] = {
        {0, 1, 0},
        {2, 0, 0},
        {3, 0, 2},
        {2, 1, 1}
};

// ������󣬱�ʾÿ�����̻���Ҫ����Դ��
int need[NUM_PROCESSES][NUM_RESOURCES];
int available[NUM_RESOURCES]; // ��ǰ������Դ��

// ��ʼ��need�����available����
void initialize() {
    for (int i = 0; i < NUM_PROCESSES; i++) {
        for (int j = 0; j < NUM_RESOURCES; j++) {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }
    available[0] = 3;
    available[1] = 3;
    available[2] = 2; // �����ʼ������ԴΪ(3, 3, 2)
}

// ����Ƿ��а�ȫ���д���
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
                if (j == NUM_RESOURCES) { // �����ǰ���̵����󲻳���������Դ
                    for (j = 0; j < NUM_RESOURCES; j++)
                        work[j] += allocation[p][j]; // �黹��Դ
                    finish[p] = 1;
                    count++;
                    found = 1;
                }
            }
        }
    }

    return (count == NUM_PROCESSES);
}

// ������Դ�ĺ���
bool requestResources(int processId, int request[]) {
    for (int i = 0; i < NUM_RESOURCES; i++) {
        if (request[i] > need[processId][i]) {
            printf("���� %d ����Դ���󳬳����������\n", processId);
            return false;
        }
        if (request[i] > available[i]) {
            printf("���� %d ����Դ�����޷����㣬��Ϊ��Դ���㡣\n", processId);
            return false;
        }
    }

    // ����available��allocation����ģ�������Դ
    for (int i = 0; i < NUM_RESOURCES; i++) {
        available[i] -= request[i];
        allocation[processId][i] += request[i];
        need[processId][i] -= request[i];
    }

    // ����µ�״̬�Ƿ�ȫ
    return isSafe();
}


int main() {
    //��ʼ��need����� available��Դ������
    initialize();

    //��鵱ǰ״̬�Ƿ�ȫ
    printf("��ʼ����ϵͳ״̬��\t");
    if (isSafe()) {
        printf("��ȫ\n");
    } else {
        printf("����ȫ\n");
    }

    // ����  ����2����(1, 0, 2)��Դ
    int request[] = {1, 0, 2};
    if (requestResources(2, request)) {
        printf("����2��Դ����ɹ���\n");
        // ����ִ����Ϻ��ͷ���Դ
    } else {
        printf("����2��Դ����ʧ�ܡ�\n");
    }

    printf("��Դ�ͷź�ϵͳ״̬��\t");
    if (isSafe()) {
        printf("��ȫ\n");
    } else {
        printf("����ȫ\n");
    }

    return 0;
}

 */