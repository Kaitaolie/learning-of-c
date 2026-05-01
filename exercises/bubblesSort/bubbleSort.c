/* 
  冒泡排序是简单的排序算法 
  它重复地遍历要排序的数列
  一次比较两个元素
  如果它们的顺序错误就把它们交换过来。
  这个过程重复进行，直到没有再需要交换的元素为止。
  此时就排序好了
*/

// 下面是一个使用冒泡排序算法的C语言实现：

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int* arr, int n);
void swap(int *p, int *q);
void printArray(int* , int n);

int main()
{
    int arr[20];
    // 计算数组长度
    /*
       此处貌似是脱裤子放屁
       实际上这个程序本来就是练习冒泡排序
       写着写着就想多加点东西
       如果手动初始化呢
       比如这里是不是就可以整个动态内存分配
       那时就不用了
       嘿嘿嘿
    */
    int n = sizeof(arr) / sizeof(arr[0]);

    // 生成一个随机数组
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        arr[i] = rand() % 100;
    }

    printf("Original array: \n");
    // 数组在函数中以指针传递，数组元素以值传递
    printArray(arr, n);
    
    bubbleSort(arr, n);
    printf("\nSorted array: \n");
    printArray(arr, n);
    
    printf("\n");
    return 0;
}

// 冒泡排序函数
/*
   冒泡函数会检查数组中前后两个数的大小
   如果后面的比前面的小则交换
   如此循环往复
   最终实现从 小到大/大到小 排序
*/
void bubbleSort(int* arr, int n){
    for (int i = 0; i < n - 1; i++){
        // 定义一个交换标识符，判断是否出现交换
        int swapped = 0; 
        for (int j = 0; j < n - i - 1; j++){
            // 内层循环实现将最 大/小 数推到最后
            if (arr[j] > arr[j + 1]){
               // 对变量操作时，值传递的变量应使用指针
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
            // 没有交换出现，说明已经实现拍序
        }
        if(!swapped) break;
    }
}

// 定义一个交换函数，使用指针可以将变量传递回原处
void swap(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

// 定义一个函数遍历并打印数组, 减少重复代码块出现
void printArray(int *a, int n){
    for (int i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
}