# 最近编写的 C 程序

文件：`examples/projects/experiment1/experiment.c`

这是最近写入的 C 程序内容：

```c
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
```
