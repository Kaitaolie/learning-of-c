#include <stdio.h>

int main(void)
{
    int i, n;
    int denominate = 4;
    int flag = 1;
    double sum = 0;
    double item = 1.0;

    scanf("%d", &n);

    for(i=1; i <= n; i++)
        {
        sum = sum + item;
        flag = -flag;
        denominate = denominate + 3;
        item = flag * 1.0 / denominate;
        }
    printf("sum = %.3f\n", sum);
    
    return 0;
}