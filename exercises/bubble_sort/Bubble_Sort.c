// 冒泡排序是简单的排序算法，它重复地遍历要排序的数列，一次比较两个元素，如果它们的顺序错误就把它们交换过来。这个过程重复进行，直到没有再需要交换的元素为止。
// 下面是一个使用冒泡排序算法的C语言实现：
// Bubble Sort is a simple sorting algorithm that repeatedly steps through the list to be sorted, compares adjacent elements and swaps them if they are in the wrong order. The process is repeated until no swaps are needed, which means the list is sorted.
// Below is a C implementation of the Bubble Sort algorithm:

#include <stdio.h>

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr, n);
    printf("Sorted array: \n");

    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}

void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}