# 选择排序 (Selection Sort)

## 逻辑描述
选择排序是一种简单直观的排序算法。它的工作原理是每一次从待排序的数据元素中选出最小（或最大）的一个元素，存放在序列的起始位置，然后，再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。以此类推，直到全部待排序的数据元素排完。

就像在排队时，每次选出最矮的人放到队伍前面。

## 示例代码
```c
#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // 交换 arr[min_idx] 和 arr[i]
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("排序后的数组: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

## 解释说明
在这个例子中，数组 {64, 25, 12, 22, 11} 被排序。首先找到最小元素 11，与第一个元素 64 交换。然后在剩余元素中找到最小 12，与第二个位置交换，以此类推。最后得到 {11, 12, 22, 25, 64}。

选择排序的时间复杂度也是 O(n^2)，但它比冒泡排序的交换次数少。