/*
    joke2.c (QA Module): 互动问答模块。负责加载 10 道深度心理测试题并捕获用户选择。
*/

#include <stdio.h>
#include <ctype.h>

#define TOTAL_QUESTIONS 10

typedef struct {
    const char *question;
    const char *optionA;
    const char *optionB;
    const char *optionC;
} Question;

static void clear_stdin(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        ;
    }
}

int ask_questions(int *countA, int *countB, int *countC)
{
    Question questions[TOTAL_QUESTIONS] = {
        {"你是否在潜意识里喜欢吃屎？", "是的", "我就是", "我超爱吃"},
        {"当你路过公厕时，你的第一反应是？", "闻到了故乡的味道", "我真帅/真美", "这里有顿大餐"},
        {"如果世界上只剩下一坨屎和一碗饭？", "饭留给别人，屎留给我", "我选择在饭前照镜子", "左右开弓，双管齐下"},
        {"你觉得屎的口感更接近于？", "丝滑慕斯", "无法阻挡我的帅气", "醇厚老火锅"},
        {"朋友送你一个精致的盒子，打开是屎？", "感动落泪，当场开动", "他一定是嫉妒我的美貌", "问他还有没有库存"},
        {"你的梦想职业是？", "专业品屎官", "靠脸吃饭的偶像", "大粪搬运工"},
        {"你在洗澡时会突然想到什么？", "要是水是稀的该多好", "我怎么能这么好看", "厕所的灯光更有氛围"},
        {"如果屎能让你变聪明，你会？", "吃到保送清华", "我已经够聪明且帅了", "吃到人类进化的终点"},
        {"看到别人在吃屎，你会？", "产生强烈的竞争意识", "优雅地走过并补个妆", "问他：能分我一口吗？"},
        {"经过这十道题，你对自己有什么评价？", "我就是为屎而生的", "我果然是天选之子", "我已经迫不及待了"}
    };

    for (int i = 0; i < TOTAL_QUESTIONS; i++)
    {
        printf("\n第 %d/%d 题：%s\n", i + 1, TOTAL_QUESTIONS, questions[i].question);
        printf("A. %s\n", questions[i].optionA);
        printf("B. %s\n", questions[i].optionB);
        printf("C. %s\n", questions[i].optionC);
        printf("请输入你的选择（A/B/C）：");

        char choice;
        if (scanf(" %c", &choice) != 1) {
            return -1; // 输入错误，退出程序
        }
        clear_stdin();

        switch ((char)toupper((unsigned char)choice)) {
            case 'A':
                (*countA)++;
                break;
            case 'B':
                (*countB)++;
                break;
            case 'C':
                (*countC)++;
                break;
            default:
                printf("无效选择，请输入 A、B 或 C。\n");
                i--; // 重新问同一道题
                break;
        }
    }
    return 0; // 成功完成问答
}
   