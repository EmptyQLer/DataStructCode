/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>
#include <time.h>

#define NUM_PHILOSOPHERS 5

sem_t left_chopsticks_semaphore; // ����ͬʱ����߿��ӵ���ѧ������
sem_t chopsticks[NUM_PHILOSOPHERS]; // ÿ�����Ӷ�Ӧ���ź���

void* philosopher(void* arg);
void dine(int id);

int main() {
    srand(time(NULL)); // ��ʼ�����������

    sem_init(&left_chopsticks_semaphore, 0, 4); // �������4λ��ѧ��ͬʱ����߿���
    for (int i = 0; i < NUM_PHILOSOPHERS; ++i) {
        sem_init(&chopsticks[i], 0, 1); // ÿ�����ӳ�ʼ��Ϊ����״̬
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
    // ���Ի�ȡ����ӵ����
    sem_wait(&left_chopsticks_semaphore);

    sem_wait(&chopsticks[id]); // ������߿���
    printf("��ѧ�� %d ������߿���.\n", id+1);

    usleep(rand() % 100000); // ģ��˼��ʱ�䣬���������

    sem_wait(&chopsticks[(id + 1) % NUM_PHILOSOPHERS]); // �����ұ߿���
    printf("��ѧ�� %d �����ұ߿��Ӳ���ʼ�Է�.\n", id+1);

    // ����
    usleep(1000000);

    sem_post(&chopsticks[(id + 1) % NUM_PHILOSOPHERS]); // �����ұ߿���
    printf("��ѧ�� %d �����ұ߿���.\n", id+1);

    sem_post(&chopsticks[id]); // ������߿���
    printf("��ѧ�� %d ������߿���.\n", id+1);

    sem_post(&left_chopsticks_semaphore); // �ͷ�����߿��ӵ����
}
*/