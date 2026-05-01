# 插入排序 (Insertion Sort)

## 逻辑描述
插入排序是一种简单直观的排序算法。它的工作原理是通过构建有序序列，对于未排序数据，在已排序序列中从后向前扫描，找到相应位置并插入。

想象一下打扑克牌时，你从桌子上拿牌，每次拿一张插入到手中已排序的牌中合适的位置。

## 示例代码
```c
#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    printf("排序后的数组: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

## 解释说明
在这个例子中，数组 {12, 11, 13, 5, 6} 被排序。从第二个元素开始，每次将当前元素插入到前面已排序部分的正确位置。例如，11 比 12 小，所以插入到前面。最后得到 {5, 6, 11, 12, 13}。

插入排序在数据几乎有序时效率很高，时间复杂度最好是 O(n)，最坏是 O(n^2)。