#include <stdio.h>

int main(void)
{
    int a, b;
    int i, sum = 0;

    // 输入区间
    printf("请输入区间 [a, b] 的a和b (用空格隔开) : ");
    scanf("%d %d", &a, &b);

    // 判断区间是否正确
    if (a > b)
    {
        printf("区间错误!\n");
        return 0;
    }

    // 接下来找出区间内最小能被6整除的数
    // 该公式可以计算出在a右边距离最近的能被6整除的数
    i = a + (6 - a % 6) % 6;

    // 因为所有符合要求的数构成等差数列所以接下来每次加6
    for (; i <= b; i += 6)
    {
        sum += i;
    }

    // 输出结果
    printf("[%d, %d] 区间内能被6整除的整数之和为: %d\n", a, b, sum);
    return 0;
}

// int main(void)              //主函数
// {                           //主函数开始
//     int i, sum = 0;         //定义变量i和sum的数据类型并赋值

//     for(i=1; i<=100; i++){  //for循环开始
//         if(i%6== 0){        //判断i是否能被6整除
//             sum = sum + i;  //将符合条件的数累加并赋值给sum
//         }
//     }
//     printf("%d\n", sum);    //输出运算结果

//     return 0;
// }                           //运行结束