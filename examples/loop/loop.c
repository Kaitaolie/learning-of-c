// #include <stdio.h>

// int main(void)
// {
//     int year;
//     int n = 0;

//     if((scanf("%d", &year) != 1) || (year <= 2000 || year >= 2101)){
//         printf("Invalid year!\n");
//         return 1;
//     }

//     for(int i = 2001; i <= year; i++){
//         if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)){
//             printf("%d\n", i);
//             n++;
//         }
//     }

//     if(n == 0){
//         printf("None\n");
//     }

//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>

// int main(void)
// {
//     int k = 1;
//     int letter = 0;
//     int blank = 0;
//     int digit = 0;
//     int other = 0;
//     const int N = 10;
//     char ch;

//     for(; k <= N; k++){
//         ch = getchar();
//         if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
//             letter ++;
//         } else if(ch == (int)32 || ch == (int)10){
//             blank ++;
//         } else if(ch >= '0' && ch <= '9'){
//             digit ++;
//         } else{
//             other ++;
//         }
//     }

//     printf("letter = %d, blank = %d, digit = %d, other = %d\n",letter, blank, digit, other);
//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>

// int main(void)
// {
//     int x;
//     int digits = 0;

//     printf("请输入一个正整数：");
//     if (scanf("%d", &x) != 1)
//         return 1;

//     while (x > 0){
//         x /= 10;
//         digits ++;
//     }

//     printf("这个数字的位数是：%d\n", digits);

//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int i, n;
//     double sum = 0;

//     if (scanf("%d", &n) != 1) return 1;

//     i = 1; 

//     if (n > 0) { 
//         do {
//             sum += sqrt(i);
//             i++;        
//         } while (i <= n); 
//     }

//     printf("sum = %.2f\n", sum);
//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>

// int main(void)
// {
//     int a, b, m;
    
//     // 使用三元运算符：如果 a > b 为真，则 m = a，否则 m = b
//     // 三元运算符“(condition) ? expression1 : expression2”：条件为真执行表达式1，条件为假执行表达式2.
//     for(int i=0; i<100;){
//         if(scanf("%d %d", &a, &b) != 2) return 1;
//         m = (a > b) ? a : b;
//         printf("%-3d\n", m);
//     }
//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

/*
 如果 b=0，计算结束，a 就是最大公约数；
 否则，计算 a 除以 b 的余数，让 a 等于 b，而 b 等于余数；
 回到第一步；
*/

#include <stdio.h>

int main(void)
{
    int a, b, t;

    if(scanf("%d %d", &a, &b) != 2) return 1;
    while(b != 0){
        t = a % b;
        a = b;
        b = t;
    }
    
    printf("%d\n", a);
    return 0;
}