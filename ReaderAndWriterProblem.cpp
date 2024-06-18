//
// Created by Administrator on 2024/6/15.
// 读写者问题C语言实现

/*
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

char buffer[BUFFER_SIZE];
int readers = 0;
int writers = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t can_write = PTHREAD_COND_INITIALIZER;

void *writer(void *arg) {
    int *id = static_cast<int *>(arg);

    while (1) {
        pthread_mutex_lock(&mutex);

        // 等待直到没有读者
        while (readers > 0) {
            pthread_cond_wait(&can_write, &mutex);
        }

        writers++;
        printf("写者：%d 开始访问\n", *id);

        // 模拟写操作
        sleep(1);

        printf("写者：%d 结束访问\n", *id);
        writers--;

        pthread_mutex_unlock(&mutex);

        // 模拟写操作完成后的延迟
        sleep(1);
    }

    return NULL;
}

void *reader(void *arg) {
    int *id = static_cast<int *>(arg);

    while (1) {
        pthread_mutex_lock(&mutex);
        readers++;
        if (writers == 0) {
            printf("读者：%d 开始读操作\n", *id);
            // 模拟读操作
            sleep(1);
            printf("读者：%d 结束读操作\n", *id);
        } else {
            printf("读者需要等待写者: %d 完成访问\n", *id);
            pthread_cond_wait(&can_write, &mutex);
            printf("读者：%d 开始读操作\n", *id);
            // 模拟读操作
            sleep(1);
            printf("读者：%d 完成读操作\n", *id);
        }
        readers--;
        pthread_cond_broadcast(&can_write);
        pthread_mutex_unlock(&mutex);
        // 模拟读操作完成后的延迟
        sleep(1);
    }
    return NULL;
}

int main() {
    pthread_t threads[5];
    int ids[5] = {1, 2, 3, 4, 5};
    // 创建读者和写者线程
    for (int i = 0; i < 5; i++) {
        if (i < 2) {
            pthread_create(&threads[i], NULL, writer, &ids[i]);
        } else {
            pthread_create(&threads[i], NULL, reader, &ids[i]);
        }
    }
    // 等待所有线程结束
    for (int i = 0; i < 5; i++) {
        pthread_join(threads[i], NULL);
    }
    return 0;
}
*/