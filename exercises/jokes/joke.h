/*
    joke.h: 包含 joke0.c，joke1.c，joke2.c，joke3.c 中函数的声明。
*/

#ifndef JOKE_H
#define JOKE_H

int ask_questions(int *countA, int *countB, int *countC);
void analyze_results(int countA, int countB, int countC);
int identity_check(const char *name);

#endif // JOKE_H
