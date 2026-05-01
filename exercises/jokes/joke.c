/*
  这是一个恶搞程序，包含多个文件：
    - joke.c: 主程序，包含 main 函数。
    - joke1.c (Identity Module): 身份核验模块。内置黑名单与白名单过滤机制，对特定用户进行“特殊关照”。
    - joke2.c (QA Module): 互动问答模块。负责加载 10 道深度心理测试题并捕获用户选择。
    - joke3.c (Analysis Module): 逻辑评估模块。执行数据加权运算，根据选项占比输出最终的人格判定报告。
    - joke.h: 包含 joke1.c，joke2.c，joke3.c 中函数的声明。
  程序示例：
    如果输入“单鸿辉”，输出 "单鸿辉属于大粪人格"
  等等。
  
  以及其他问题比如一个选择题“你是不是喜欢吃屎”，a为“是的”，b为“我就是”，c为“我超爱吃”。
  总共10个类似题目。
  先输入名字，如果是单鸿辉直接输出“单鸿辉属于大粪人格”，如果不是单鸿辉就继续问问题。
  如果是“王一凡”输出“王一凡比王一博帅”
  如果是“赖文涛”输出“查无此人”并退出程序


  如果十个题目都答完那么根据选项给出各种人格：
    程序将根据用户在 10 道题中选择 A、B、C 的次数，计算其在不同维度上的“人格拟合度”。计算公式统一为：P = n / 10 * 100%%
    其中，n 是用户在某个维度上选择的次数（例如，选择 A 的次数），10 是总题数。最终输出将根据不同维度的拟合度进行综合评定，得出用户的人格类型。例如：
  这里给出人格维度：

  1. A 维度：原生食屎人格 (Original Scatological Personality)当 A 选项 >= 6 个 时触发。
  匹配度范围输出称号系统评语60% - 70%初级尝味者你的潜意识里已经展现出了对“特殊物质”的浓厚兴趣。
  80% - 90%资深美食家你对这种物质的理解已经超越了 99% 的人类，建议直接入席。100%大自然循环大使你就是奇迹！
  你与该人格的匹配度达 100%，你是生态链中不可或缺的一环。

  2. B 维度：顶级颜值人格 (Self-Obsessed Visualist)当 B 选项 >= 6 个 时触发。  
  匹配度范围输出称号系统评语60% - 70%自恋小天才即使在面对离谱的问题时，你依然不忘夸赞自己的美貌。
  80% - 90%闪闪发光的大漂亮你的自信已经溢出屏幕，建议停止答题，直接去走红毯。
  100%绝世大帅逼/大漂亮匹配度 100%！在这个充满粪坑的世界里，你就是那颗最自恋的明珠。

  3. C 维度：大粪狂热分子 (Fecal Fanaticism)当 C 选项 >= 6 个 时触发。
  匹配度范围输出称号系统评语60% - 70%重口味爱好者你的口味之重，连系统都感到一丝敬畏。
  80% - 90%狂热追随者你不仅仅是喜欢，你简直是在用灵魂拥抱这种物质。
  100%大粪圣教主匹配度 100%！你已经不再是凡人，你是大粪界唯一的神。

  特殊：混沌人格判定 (Chaotic Balance)
如果没有任何一个选项达到 6 个（即选项分布比较均匀，如 4-3-3 或 5-4-1），程序将输出以下结果：

称号：多重人格精神内耗者
评语：
“系统无法对用户进行分类。
你在‘吃屎’、‘自恋’与‘狂热’之间反复横跳。这种极端的不稳定性表明，用户可能是一个隐藏极深的、全能型的高级整蛊专家。”
*/

// 由于 AI 的帮助，注释全部没了......


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "joke.h"

// 修复乱码问题
#ifdef _WIN32
#include <windows.h>
static void enable_utf8_console(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
}
#else
static void enable_utf8_console(void) {}
#endif

static void print_banner(void)
{
    printf("\n+================================================+\n");
    printf("|                 DFIT 人格测试                  |\n");
    printf("|          Data-Driven Personality System         |\n");
    printf("+================================================+\n");
    printf("| 版本：1.0                                      |\n");
    printf("| 说明：本程序仅用于娱乐，结果仅供参考。        |\n");
    printf("+================================================+\n");
}

static void print_menu(void)
{
    printf("\n[主菜单]\n");
    printf("  O - 开始测试\n");
    printf("  H - 帮助\n");
    printf("  V - 版本信息\n");
    printf("  Q - 退出\n");
    printf("请选择菜单项：");
}

static void print_help(void)
{
    printf("\n帮助信息:\n");
    printf("  O  - 开始 DFIT 人格测试流程。\n");
    printf("  H  - 显示本帮助菜单。\n");
    printf("  V  - 显示程序版本信息。\n");
    printf("  Q  - 退出程序。\n");
    printf("测试过程中请输入 A、B 或 C 作为答案。\n");
    printf("若输入无效将重新询问当前问题。\n");
}

static void print_version(void)
{
    printf("\nDFIT 人格测试 版本 1.0\n");
    printf("作者：Kai Lai\n");
    printf("构建时间：2026-04-15\n");
    printf("说明：本程序为趣味测试软件。\n");
}

static void read_line(char *buffer, size_t size)
{
    if (fgets(buffer, (int)size, stdin) == NULL) {
        buffer[0] = '\0';
        return;
    }

    size_t len = strlen(buffer);
    if (len > 0 && buffer[len - 1] == '\n') {
        buffer[len - 1] = '\0';
    }
}

static char read_menu_choice(void)
{
    char buffer[16];
    read_line(buffer, sizeof(buffer));
    if (buffer[0] == '\0') {
        return '\0';
    }
    return (char)toupper((unsigned char)buffer[0]);
}

static void run_test(void)
{
    char name[100];
    int countA = 0, countB = 0, countC = 0;

    printf("\n请输入你的名字：");
    read_line(name, sizeof(name));
    if (name[0] == '\0') {
        printf("未输入名字，测试已取消。\n");
        return;
    }

    int identity_result = identity_check(name);
    if (identity_result != 0) {
        return;
    }

    if (ask_questions(&countA, &countB, &countC) != 0) {
        printf("问答过程中发生错误，测试已取消。\n");
        return;
    }

    analyze_results(countA, countB, countC);
}

int main(void)
{
    enable_utf8_console();
    print_banner();

    while (1) {
        print_menu();
        char choice = read_menu_choice();

        switch (choice) {
        case 'O':
            run_test();
            break;
        case 'H':
            print_help();
            break;
        case 'V':
            print_version();
            break;
        case 'Q':
            printf("\n已退出程序，欢迎再次使用。\n");
            return 0;
        default:
            printf("无效选项，请输入 O、H、V 或 Q。\n");
            break;
        }
    }
}
