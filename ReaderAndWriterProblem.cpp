//
// Created by Administrator on 2024/6/15.
// ��д������C����ʵ��

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

        // �ȴ�ֱ��û�ж���
        while (readers > 0) {
            pthread_cond_wait(&can_write, &mutex);
        }

        writers++;
        printf("д�ߣ�%d ��ʼ����\n", *id);

        // ģ��д����
        sleep(1);

        printf("д�ߣ�%d ��������\n", *id);
        writers--;

        pthread_mutex_unlock(&mutex);

        // ģ��д������ɺ���ӳ�
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
            printf("���ߣ�%d ��ʼ������\n", *id);
            // ģ�������
            sleep(1);
            printf("���ߣ�%d ����������\n", *id);
        } else {
            printf("������Ҫ�ȴ�д��: %d ��ɷ���\n", *id);
            pthread_cond_wait(&can_write, &mutex);
            printf("���ߣ�%d ��ʼ������\n", *id);
            // ģ�������
            sleep(1);
            printf("���ߣ�%d ��ɶ�����\n", *id);
        }
        readers--;
        pthread_cond_broadcast(&can_write);
        pthread_mutex_unlock(&mutex);
        // ģ���������ɺ���ӳ�
        sleep(1);
    }
    return NULL;
}

int main() {
    pthread_t threads[5];
    int ids[5] = {1, 2, 3, 4, 5};
    // �������ߺ�д���߳�
    for (int i = 0; i < 5; i++) {
        if (i < 2) {
            pthread_create(&threads[i], NULL, writer, &ids[i]);
        } else {
            pthread_create(&threads[i], NULL, reader, &ids[i]);
        }
    }
    // �ȴ������߳̽���
    for (int i = 0; i < 5; i++) {
        pthread_join(threads[i], NULL);
    }
    return 0;
}
*/