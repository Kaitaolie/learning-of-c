/*
    joke3.c (Analysis Module): 逻辑评估模块。执行数据加权运算，根据选项占比输出最终的人格判定报告。
*/

#include <stdio.h>

void analyze_results(int countA, int countB, int countC)
{
    const int total = 10;
    double percentA = (double)countA / total * 100.0;
    double percentB = (double)countB / total * 100.0;
    double percentC = (double)countC / total * 100.0;

    printf("\n========================================\n");
    printf("测试结果：\n");
    printf("A 选项：%d 次 (%.0f%%)\n", countA, percentA);
    printf("B 选项：%d 次 (%.0f%%)\n", countB, percentB);
    printf("C 选项：%d 次 (%.0f%%)\n", countC, percentC);
    printf("========================================\n");

    if (percentA >= 60.0) {
        printf("称号：原生食屎人格\n");
        if (percentA >= 100.0) {
            printf("评语：你就是奇迹！你与该人格的匹配度达 100%%，你是生态链中不可或缺的一环。\n");
        } else if (percentA >= 80.0) {
            printf("评语：你对这种物质的理解已经超越了 99%% 的人类，建议直接入席。\n");
        } else {
            printf("评语：你的潜意识里已经展现出了对“特殊物质”的浓厚兴趣。\n");
        }
    } else if (percentB >= 60.0) {
        printf("称号：顶级颜值人格\n");
        if (percentB >= 100.0) {
            printf("评语：匹配度 100%%！在这个充满粪坑的世界里，你就是那颗最自恋的明珠。\n");
        } else if (percentB >= 80.0) {
            printf("评语：你的自信已经溢出屏幕，建议停止答题，直接去走红毯。\n");
        } else {
            printf("评语：即使在面对离谱的问题时，你依然不忘夸赞自己的美貌。\n");
        }
    } else if (percentC >= 60.0) {
        printf("称号：大粪狂热分子\n");
        if (percentC >= 100.0) {
            printf("评语：匹配度 100%%！你已经不再是凡人，你是大粪界唯一的神。\n");
        } else if (percentC >= 80.0) {
            printf("评语：你不仅仅是喜欢，你简直是在用灵魂拥抱这种物质。\n");
        } else {
            printf("评语：你的口味之重，连系统都感到一丝敬畏。\n");
        }
    } else {
        printf("称号：多重人格精神内耗者\n");
        printf("评语：系统无法对您进行单一分类。您在不同维度间保持了较高的平衡与随机性。\n");
    }
    printf("========================================\n");
}
