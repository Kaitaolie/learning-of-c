#include <stdio.h>

int main(void)
{
    int x, y, z;      // 输入变量改名，避免与数组冲突
    int arr[3];       // 数组改名为 arr，刚刚定义了数组 a[3] 发生报错

    // 先判断输入是否正确
    printf("请输入三个整数：");
    if (scanf("%d %d %d", &x, &y, &z) != 3) 
    {
        printf("输入有误！\n");
        return 1;
    }

    // 简单的排序逻辑（以确定 x, y, z 的顺序并存入数组）
    // 须注意数组是从 0 开始数的
    // else-if 级联语法
    if (x <= y && x <= z) {
        arr[0] = x;
        if (y <= z) { arr[1] = y; arr[2] = z; }
        else { arr[1] = z; arr[2] = y; }
    } else if (y <= x && y <= z) {
        arr[0] = y;
        if (x <= z) { arr[1] = x; arr[2] = z; }
        else { arr[1] = z; arr[2] = x; }
    } else {
        arr[0] = z;
        if (x <= y) { arr[1] = x; arr[2] = y; }
        else { arr[1] = y; arr[2] = x; }
    }

    printf("从小到大排序为：%d, %d, %d\n", arr[0], arr[1], arr[2]);
    printf("最大值为：%d\n", arr[2]);
    printf("最小值为：%d\n", arr[0]);

    return 0;
}

// if-else 语句加大括号是一个好习惯
// 尊重 Warning，不要立一个牌子还坠入悬崖
// 尊重代码风格，风格是三观...