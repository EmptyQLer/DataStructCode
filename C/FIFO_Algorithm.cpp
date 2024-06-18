//
// Created by Administrator on 2024/6/7.
//  FIFO算法，也是一种页面置换算法，旨在降低缺页频率
//  算法思想： 当发生缺页需要进行页面置换时，总是选择最早进入的页面进行置换

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
            if(rear == front) front = (front + 1) % MAX_FRAMES; // 队列满时调整front指针
            faults++;
        } else {            // 如果页面已经在帧中，需要将其移至队列末尾以模拟FIFO
            for(int j = front; j != rear; j = (j + 1) % MAX_FRAMES) {
                if(frame[j] == refString[i]) {
                    queue[(rear + 1) % MAX_FRAMES] = queue[j]; // 临时存储被替换的索引
                    queue[j] = rear;
                    rear = (rear + 1) % MAX_FRAMES;
                    break;
                }
            }
        }
    }

    printf("FIFO 页面置换次数: %d\n", faults);
}

int main() {
    int refString[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int size = sizeof(refString)/sizeof(refString[0]);

    FIFO(refString, size);
    return 0;
}

*/

