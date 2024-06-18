//
// Created by Administrator on 2024/6/7.
//  OPT算法，一种页面置换算法，旨在有效降低缺页频率
//  算法思想：当发生缺页需要进行页面置换时，总是选择最久以后才出现的页面进行置换
/*
#include <stdio.h>
#include <stdlib.h>

#define MAX_FRAMES 3

// 简化版OPT算法，仅用于演示
void OPT(int refString[], int size, int frames) {
    int frame[MAX_FRAMES];
    for(int i = 0; i < MAX_FRAMES; ++i) frame[i] = -1; // 初始化所有帧为-1
    int faults = 0;
    int farthestIndex, found;

    for(int i = 0; i < size; ++i) {
        found = 0;
        farthestIndex = -1;

        // 简化查找过程，实际OPT需要依据未来访问序列决定
        for(int j = 0; j < MAX_FRAMES; ++j) {
            if(frame[j] == refString[i]) {
                found = 1;
                break;
            } else if(frame[j] == -1 && farthestIndex == -1) {
                farthestIndex = j; // 第一个空位或默认最远位置
            }
        }

        if(!found) {
            for(int k = 0; k < MAX_FRAMES; ++k) {
                // 简化逻辑，实际应预测未来访问
                if(frame[k] != -1 && (farthestIndex == -1 || refString[i] < refString[frame[k]])) {
                    farthestIndex = k;
                }
            }
            frame[farthestIndex] = refString[i];
            faults++;
        }
    }

    printf("OPT 页面置换次数: %d\n", faults);
}

// 示例引用串
int main() {
    int refString[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int size = sizeof(refString)/sizeof(refString[0]);
    int frames = MAX_FRAMES;
    OPT(refString, size, frames);
    return 0;
}
 */