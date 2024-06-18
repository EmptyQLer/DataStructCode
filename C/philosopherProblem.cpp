/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>
#include <time.h>

#define NUM_PHILOSOPHERS 5

sem_t left_chopsticks_semaphore; // 限制同时拿左边筷子的哲学家数量
sem_t chopsticks[NUM_PHILOSOPHERS]; // 每根筷子对应的信号量

void* philosopher(void* arg);
void dine(int id);

int main() {
    srand(time(NULL)); // 初始化随机数种子

    sem_init(&left_chopsticks_semaphore, 0, 4); // 最多允许4位哲学家同时拿左边筷子
    for (int i = 0; i < NUM_PHILOSOPHERS; ++i) {
        sem_init(&chopsticks[i], 0, 1); // 每根筷子初始化为可用状态
    }

    pthread_t threads[NUM_PHILOSOPHERS];
    for (int i = 0; i < NUM_PHILOSOPHERS; ++i) {
        if (pthread_create(&threads[i], NULL, philosopher, (void*)i)) {
            perror("Failed to create thread");
            return 1;
        }
    }

    for (int i = 0; i < NUM_PHILOSOPHERS; ++i) {
        pthread_join(threads[i], NULL);
    }

    sem_destroy(&left_chopsticks_semaphore);
    for (int i = 0; i < NUM_PHILOSOPHERS; ++i) {
        sem_destroy(&chopsticks[i]);
    }

    return 0;
}

void* philosopher(void* arg) {
    int id = (intptr_t)arg;
    while (1) {
        dine(id);
    }
    return NULL;
}

void dine(int id) {
    // 尝试获取左筷子的许可
    sem_wait(&left_chopsticks_semaphore);

    sem_wait(&chopsticks[id]); // 拿起左边筷子
    printf("哲学家 %d 拿起左边筷子.\n", id+1);

    usleep(rand() % 100000); // 模拟思考时间，增加随机性

    sem_wait(&chopsticks[(id + 1) % NUM_PHILOSOPHERS]); // 拿起右边筷子
    printf("哲学家 %d 拿起右边筷子并开始吃饭.\n", id+1);

    // 进餐
    usleep(1000000);

    sem_post(&chopsticks[(id + 1) % NUM_PHILOSOPHERS]); // 放下右边筷子
    printf("哲学家 %d 放下右边筷子.\n", id+1);

    sem_post(&chopsticks[id]); // 放下左边筷子
    printf("哲学家 %d 放下左边筷子.\n", id+1);

    sem_post(&left_chopsticks_semaphore); // 释放拿左边筷子的许可
}
*/