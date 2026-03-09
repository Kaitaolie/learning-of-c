#include <stdio.h>

int main(void)
{
    int n;
    int i;
    
    printf("请输入一个数字：");
    scanf("%d", &n);

    // 判断输入数字是否属于讨论范围
    if (n<2){
        printf("%d既不是素数也不是非素数\n", n);  
        return 0;
    }

    // 所有偶数都不是素数
    if(n != 2 && n % 2 == 0){
        printf("%d不是素数\n", n);
        return 0;
    }

    /* 
    * 通过判断小于 √n 的所有数字中是否有因子
    * 如果在小于 √n 的数中发现因子那么这个数就不是素数
    * 因为如果该数是一个合数那么其可以写成两个数（这里设为a、b）的乘积
    * 假设 a<b ，那么 a 必然小于 √n
    * 因此如果找不到小于 √n 的因子这个就不是合数
    * 那么这个数就是素数
    */
    for(i = 3; i * i <= n; i=i+2){                
        if(n % i == 0){
            printf("%d不是一个素数\n", n);
            return 0;                           
        }
    }
    
    // 考察所有小于 √n 的数字都不是因子则该数为素数
    printf("%d是一个素数\n",n);                  
    return 0;
}