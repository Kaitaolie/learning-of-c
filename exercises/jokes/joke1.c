/*
    joke1.c (Identity Module): 数据驱动的身份验证模块。
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    const char *name;
    int code; /* 1 = handled and exit normally, -1 = handled and exit with cancel */
    const char *message;
} IdentityEntry;

int identity_check(const char *name)
{
    static const IdentityEntry entries[] = {
        {"单鸿辉",  1,  "单鸿辉属于大粪人格"},
        {"王一凡",  1,  "王一凡比王一博帅"},
        {"赖文涛", -1,  "查无此人"},
    };

    for (size_t i = 0; i < sizeof(entries) / sizeof(entries[0]); ++i) {
        if (strcmp(name, entries[i].name) == 0) {
            printf("%s\n", entries[i].message);
            return entries[i].code;
        }
    }

    return 0; /* 未命中特殊身份，继续测试 */
}
