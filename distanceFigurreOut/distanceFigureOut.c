#include <stdio.h>
#include <math.h>

int coordinateInput(double *a, double *b, int c);
int main(void)
{
    char charInput;
    double n1, e1; 
    double n2, e2, s;

    // 使用 do-while 循环可以直接进入循环，不用初始化 charinput
    do{
        // 为防止重复代码段输入，我定义一个函数控制数据输入
        while (coordinateInput(&n1, &e1, 1));
        while (coordinateInput(&n2, &e2, 2));

        // 距离计算表达式
        s = hypot(n1 - n2, e1 - e2);

        printf("The distance is %.2f\n", s);
        printf("You can press \"Q\" to exit "
               "or press any else keys to return.\n");

        // 退出循环条件判断
        charInput = getchar();
        while (getchar() != '\n');
    } while (charInput != 'Q' && charInput != 'q');

    return 0;
}

// 坐标值输入函数，由于需要通过函数初始化变量所以使用指针
int coordinateInput(double *a, double *b, int c)
{
    // 定义一个检查值，判断输入是否错误
    int checkValue;
    checkValue = 0;
    
    printf("Please enter the coordinate(N%d E%d):", c, c);
    if(scanf("%lf %lf", a, b) != 2){
        printf("The value is Invalid! Please try again!\n");
        // 如果输出数据类型不匹配步入下一个循环
        checkValue = 1;
    }
    // 清理缓冲区
    while (getchar() != '\n');
    
    // 此处说明一下为什么不直接 "retuen 0" 或 "retuen 1"
    // 因为除了控制数据的输入输出之外，函数还要清理缓冲区
    // 如果我们在 if 语段里面 retuen 1 程序会离开函数并返回1
    // 那么清理缓冲区的任务没有达成
    // 虽然我仍然可以在 if 语段内部再添加一个 "while (getchar() != '\n')"
    // 但是那样我认为代码并不美观
    // 当然，使用 bool 值可以兼顾美观和简洁
    // 不过我这里单纯想秀一下英语
    return checkValue;
}