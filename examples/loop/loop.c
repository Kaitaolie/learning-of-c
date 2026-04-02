#include <stdio.h>

int main(void)
{
    int year;
    int n = 0;

    if((scanf("%d", &year) != 1) || (year <= 2000 || year >= 2101)){
        printf("Invalid year!\n");
        return 1;
    }

    for(int i = 2001; i <= year; i++){
        if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)){
            printf("%d\n", i);
            n++;
        }
    }

    if(n == 0){
        printf("None\n");
    }

    return 0;
}

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

//     while (x > 0)
//     {
//         x /= 10;
//         digits ++;
//     }

//     printf("这个数字的位数是：%d\n", digits);

//     return 0;
// }