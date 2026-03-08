#include <stdio.h>
int main()
{
    int n, i=2;
    
    printf("请输入一个数字：");
    scanf("%d", &n);

    if (n<2){
        printf("%d既不是素数也不是非素数\n", n);  // 判断输入数字是否属于讨论范围
        return 0;
    }

    for(i = 2; i * i <= n; i++){                // 通过判断小于 √n 的所有数字中是否有因子
        if(n % i == 0){
            printf("%d不是一个素数\n", n);
            return 0;                           // 出现因子，程序结束
        }
    }
    
    printf("%d是一个素数\n",n);                  // 考察所有小于本身的数字都不是因子则该数为素数
    return 0;
}