// 本题要求编写程序，计算学生们的平均成绩，并统计及格（成绩不低于60分）的人数。题目保证输入与输出均在整型范围内。

#include <stdio.h>

int main(void)
{
    int count = 0;
    double average, sum = 0;
    int i, a, n;
    
    if(scanf("%d", &n) != 1 || n <= 0){
        if(n == 0) {
            printf("average = 0.0\ncount = 0\n");
            return 0;
        }
        printf("Error Value!!\n");
        return 1;
    }

    for(i = 1; i <= n; i++){
        if(scanf("%d", &a) != 1){
            printf("Error Value!!\n");
            return 2;
        }
        sum += a;
        if(a >= 60){
            count++;
        }
    }

    average = sum / n;

    printf("average = %.1f\n", average);
    printf("count = %d\n", count); 

    return 0;
}

// 本题我利用循环结构来读取学生成绩，并在循环中累加成绩总和以及统计及格人数。最后计算平均成绩并输出结果。程序还包含了输入验证，确保输入的学生人数和成绩都是有效的整数。
// 除了利用循环结构遍历学生成绩外，另一种可行方案是使用数组来存储所有学生的成绩，然后在数组中进行计算。这种方法可以更方便地进行数据处理和统计，但需要额外的内存空间来存储成绩。

// 下面是使用数组和指针的实现方式：

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int count = 0;
//     double average, sum = 0;
//     int i, a, n;

//     if(scanf("%d", &n) != 1 || n <= 0){
//         if(n == 0) {
//             printf("average = 0.0\ncount = 0\n");
//             return 0;
//         }
//         printf("Error Value!!\n");
//         return 1;
//     }

//     int *scores = (int *)malloc(n * sizeof(int));
//     if(scores == NULL) {
//         printf("Memory allocation failed!\n");
//         return 2;
//     }

//     for(i = 0; i < n; i++){
//         if(scanf("%d", &a) != 1){
//             printf("Error Value!!\n");
//             free(scores);
//             return 3;
//         }
//         scores[i] = a;
//         sum += a;
//         if(a >= 60){
//             count++;
//         }
//     }

//     average = sum / n;

//     printf("average = %.1f\n", average);
//     printf("count = %d\n", count); 

//     free(scores);
//     return 0;
// }

// 相对而言，使用数组和指针的方案在处理大量数据时可能更高效，因为它允许我们一次性读取所有成绩并进行计算，而不需要在每次输入时进行累加和统计。然而，对于小规模的数据，使用循环结构直接处理输入可能更简单和直观。