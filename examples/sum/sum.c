#include <stdio.h>

int main(void) {
    int a, b;                                           // 定义区间端点
    int i, sum = 0;
    
   
    printf("请输入区间 [a, b] 的a和b (用空格隔开) : ");   // 输入区间
    scanf("%d %d", &a, &b);
    
    if (a > b){
        printf("区间错误!\n");                          // 判断区间是否正确
        return 0;
    }
    
    i = a + (6 - a % 6) % 6;
    
    for (; i <= b; i += 6) {                            // 从第一个能被6整除的数，每次加6，直接累加所有能被6整除的数
        sum += i;
    }
    
    printf("[%d, %d] 区间内能被6整除的整数之和为: %d\n", a, b, sum);
    return 0;
}



// int main(void)              //主函数
// {                           //主函数开始
//     int i, sum = 0;         //定义变量i和sum的数据类型并赋值

//     for(i=1; i<=100; i++){  //for循环开始
//         if(i%2!= 0){        //判断i是否为奇数
//             sum = sum + i;  //将奇数累加并赋值给sum
//         }
//     }
//     printf("%d\n", sum);    //输出运算结果

//     return 0;
// }                           //运行结束