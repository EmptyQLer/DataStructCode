//
// Created by Administrator on 2024/6/7.
//  FIFO�㷨��Ҳ��һ��ҳ���û��㷨��ּ�ڽ���ȱҳƵ��
//  �㷨˼�룺 ������ȱҳ��Ҫ����ҳ���û�ʱ������ѡ����������ҳ������û�

/*
#include <stdio.h>
#include <stdlib.h>

#define MAX_FRAMES 3

void FIFO(int refString[], int size) {
    int frame[MAX_FRAMES];
    int queue[MAX_FRAMES], front = 0, rear = 0;
    int faults = 0;

    for(int i = 0; i < size; ++i) {
        int found = 0;
        for(int j = 0; j < MAX_FRAMES; ++j) {
            if(frame[j] == refString[i]) {
                found = 1;
                break;
            }
        }

        if(!found) {
            frame[rear] = refString[i];
            queue[rear] = rear;
            rear = (rear + 1) % MAX_FRAMES;
            if(rear == front) front = (front + 1) % MAX_FRAMES; // ������ʱ����frontָ��
            faults++;
        } else {            // ���ҳ���Ѿ���֡�У���Ҫ������������ĩβ��ģ��FIFO
            for(int j = front; j != rear; j = (j + 1) % MAX_FRAMES) {
                if(frame[j] == refString[i]) {
                    queue[(rear + 1) % MAX_FRAMES] = queue[j]; // ��ʱ�洢���滻������
                    queue[j] = rear;
                    rear = (rear + 1) % MAX_FRAMES;
                    break;
                }
            }
        }
    }

    printf("FIFO ҳ���û�����: %d\n", faults);
}

int main() {
    int refString[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int size = sizeof(refString)/sizeof(refString[0]);

    FIFO(refString, size);
    return 0;
}

*/

