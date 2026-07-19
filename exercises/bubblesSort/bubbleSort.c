/*
  冒泡排序：重复遍历数列，比较相邻元素，
  顺序错误则交换，直到无需交换为止。
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int *arr, size_t n);
void swap(int *p, int *q);
void printArray(const int *a, size_t n);

int main(void)
{
    int arr[20];
    size_t n = sizeof(arr) / sizeof(arr[0]);

    // 生成随机数组
    srand((unsigned)time(NULL));
    for (size_t i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    printf("Original array:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("\nSorted array:\n");
    printArray(arr, n);

    putchar('\n');
    return 0;
}

// 冒泡排序：相邻元素比较交换，swapped 标志实现提前终止
void bubbleSort(int *arr, size_t n)
{
    for (size_t i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (size_t j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
        }
        if (!swapped) break; // 本轮无交换，已有序
    }
}

// 交换两个整数（通过指针修改变量值）
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

// 打印数组（const 表示不修改数组内容）
void printArray(const int *a, size_t n)
{
    for (size_t i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
}
