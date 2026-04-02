#include <stdio.h>

int main(void)
{
    int type;

    printf("请输入操作类型 (1, 2, 3...): ");

    if (scanf("%d", &type) != 1)
    {
        printf("输入无效，请输入数字。\n");
        return 1; // 返回 1 通常表示程序异常退出
    }

    // switch-case 语句判断式要用整形变量
    switch (type)
    {
    case 1:
        printf("你选择了选项 1\n");
        /* 在这里编写选项 1 的逻辑 */
        break;

    case 2:
        printf("你选择了选项 2\n");
        break;

    default:
        printf("未知选项：%d\n", type);
        break;
    }

    return 0;
}