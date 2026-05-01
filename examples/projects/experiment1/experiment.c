// #include <stdio.h>
// void maxSwap(int *a, int *b);

// int main(void)
// {
//     int e, f, g;
//     if(scanf("%d %d %d", &e, &f, &g) != 3) return 0;

//     // 此处可以用函数减少重复语段，我们写一个 maxSwap 函数
//     maxSwap(&e, &f);
//     maxSwap(&e, &g);
//     maxSwap(&f, &g);
    
//     printf("%d->%d->%d\n", e, f, g);
//     return 0;
// }

// // 函数定义
// // 函数返回值类型只能有一个，所以 "void int maxSwap(int a, int b)" 写法是错误的 
// void maxSwap(int *a, int *b) {
//         if (*a > *b) {
//         int temp = *a;
//         *a = *b;
//         *b = temp;
//     }
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     float x;
//     float result1;
//     float result2;

//     if (scanf("%f", &x) != 1) return 0;

//     result1 = sqrt(x);
//     result2 = pow(x + 1, 2) + 2 * x + 1 / x;

//     if (x >= 0){
//         printf("f(%.2f) = %.2f\n", x, result1);
//         return 0;
//     }

//     printf("f(%.2f) = %.2f\n", x, result2);
//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>

// int main(void)
// {
//     int sign;
//     int n;

//     if (scanf("%d", &n) != 1){
//         printf("Error Invalue!!!\n");
//         return 1;
//     }

//     if(n < 0){
//         printf("sign(%d) = %d\n", n, sign = -1);
//     }else if(n == 0){
//         printf("sign(%d) = %d\n", n, sign = 0);
//     }else {
//         printf("sign(%d) = %d\n", n, sign = 1);
//     }

//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>

// int main(void)
// {
//     int enter;
//     const double APPLE = 3.00;
//     const double PEAR = 2.50;
//     const double ORANGE = 4.10;
//     const double GRAPE = 10.20;

//     printf("[1] apple\n");
//     printf("[2] pear\n");
//     printf("[3] orange\n");
//     printf("[4] grape\n");
//     printf("[0] exit\n");

//     for(int i = 1; i <= 5; i++){
//         if(scanf("%d", &enter) != 1) return 0;

//         if(enter == 0) break;
//         switch(enter){
//             case 1: printf("price = %.2f\n",APPLE); break;
//             case 2: printf("price = %.2f\n",PEAR); break;
//             case 3: printf("price = %.2f\n",ORANGE); break;
//             case 4: printf("price = %.2f\n",GRAPE); break;
//             default : printf("price = 0.00\n"); break;
//         }
//     }
//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>

// int main(void)
// {
//     int grade;

//     if (scanf("%d", &grade) != 1 || grade < 0 || grade > 100){
//         printf("Error Value!\n");
//         return 1;
//     }

//     switch(grade / 10){qq                            
//         case 10:
//         case 9: printf("A\n"); break;
//         case 8: printf("B\n"); break;
//         case 7: printf("C\n"); break;
//         case 6: printf("D\n"); break;
//         default: printf("E\n"); break;

//     }

//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>

// int main(void)
// {
//     int year;
//     int n = 0;

//     if((scanf("%d", &year) != 1) || (year <= 2000 || year >= 2101)){
//         printf("Invalid year!\n");
//         return 1;
//     }

//     for(int i = 2001; i <= year; i++){
//         if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)){
//             printf("%d\n", i);
//             n++;
//         }
//     }

//     if(n == 0){
//         printf("None\n");
//     }

//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>

// int main(void)
// {
//     int k = 1;
//     int letter = 0;
//     int blank = 0;
//     int digit = 0;
//     int other = 0;
//     const int N = 10;
//     char ch;

//     for(; k <= N; k++){
//         ch = getchar();
//         if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
//             letter ++;
//         } else if(ch == (int)32 || ch == (int)10){
//             blank ++;
//         } else if(ch >= '0' && ch <= '9'){
//             digit ++;
//         } else{
//             other ++;
//         }
//     }

//     printf("letter = %d, blank = %d, digit = %d, other = %d\n",letter, blank, digit, other);
//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>

// int main(void)
// {
//     int n, i=1;
//     int sign;
//     double sum, molecule, denomination;

//     if(scanf("%d", &n) != 1) return 1;
//     sum = 0;
//     sign = 1;

//         while(i <= n){
//             molecule = 1.0 * i;
//             denomination = 2 * i -1;
//             sum += sign * molecule / denomination;
//             sign = -sign;
//             i ++;
//         }

//     printf("%.3f\n", sum);
//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>

// int main(void)
// {
//     int n, i;
//     int sum = 0;
//     int fact = 1;

//     if (scanf("%d", &n) != 1 || n > 12) {
//         printf("Error Invalue!!");
//         return 1;
//     }

//     i =1;
//     while(i <= n) {
//         fact *= i;
//         sum += fact;
//         i++;
//     }

//     printf("%d\n", sum);
//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>

// int sum(int m, int n);

// int main()
// {    
//     int m, n;

//     scanf("%d %d", &m, &n);
//     printf("sum = %d\n", sum(m, n));
    
//     return 0;
// }

// int sum(int m, int n) 
// {
//     int total = 0;
//     for (int i = m; i <= n; i++) {
//         total += i;
//     }
//     return total;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// 结构，文件，指针，还有函数，还有数组，以及程序结构等等，怎么学习呢？
// 多写代码，多看书。
// 不在乎其精妙，所谓程序者，以实现效果良者为善。
// 循序渐进，由简入繁。
// C 之精神，其谓乎明程序设计之大要，日后若非特殊之时，其实不再用矣。

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>

// int main()
// {
//     unsigned char i;
//     i = 255;
//     printf("%d\n", i);
//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>
// void printPyramid(int height);

// int main() {
//     int h;

//     printf("请输入金字塔的高度: ");
//     if (scanf("%d", &h) != 1 || h <= 0) {
//         printf("请输入一个正整数。\n");
//         return 1;
//     }

//     printPyramid(h);

//     return 0;
// }

// void printPyramid(int height) {
//     for (int i = 1; i <= height; i++) {
//         for (int j = 1; j <= height - i; j++) {
//             printf(" ");
//         }

//         for (int k = 1; k <= 2 * i - 1; k++) {
//             printf("*");
//         }

//         printf("\n");
//     }
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>
// #include <stdbool.h>
// bool is_prime(int n);

// int main() {
//     int limit = 100;

//     printf("1 到 %d 之间的素数有：\n", limit);
    
//     for (int i = 2; i <= limit; i++) {
//         if (is_prime(i)) {
//             printf("%d ", i);
//         }
//     }

//     printf("\n");
//     return 0;
// }

// // 判断一个数是否为素数的逻辑
// bool is_prime(int n) {
//     if (n < 2) return false; // 0 和 1 不是素数
    
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             return false; // 如果能被整除，则不是素数
//         }
//     }
//     return true; // 否则是素数
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>

// void bubbleSort(int arr[], int n);
// void printArray(int arr[], int size);

// int main() {
//     int data[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(data) / sizeof(data[0]);

//     printf("原始数组: \n");
//     printArray(data, n);

//     bubbleSort(data, n);

//     printf("排序后的数组: \n");
//     printArray(data, n);

//     return 0;
// }

// void bubbleSort(int arr[], int n) {
//     int i, j, temp;
//     for (i = 0; i < n - 1; i++) {
//         // 最后 i 个元素已经排好了，不需要再比较
//         for (j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // 交换位置
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>
// #include <string.h>

// // 使用指针交换两个字符
// void swap(char *a, char *b) {
//     char temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void reverseString(char *str) {
//     if (str == NULL) return;

//     char *start = str;                  // 指向字符串首地址
//     char *end = str + strlen(str) - 1;  // 指向字符串末尾地址

//     while (start < end) {
//         swap(start, end); // 交换首尾指向的内容
//         start++;          // 起点指针后移
//         end--;            // 终点指针前移
//     }
// }

// int main() {
//     char message[] = "Hello Pointer!";
//     printf("原始字符串: %s\n", message);

//     reverseString(message);

//     printf("逆序后结果: %s\n", message);
//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n;
//     printf("请输入想要存储的整数个数: ");
//     if (scanf("%d", &n) != 1) return 1;

//     // 1. 动态分配内存
//     // p 是指向这块连续整型空间的指针
//     int *p = (int *)malloc(n * sizeof(int));

//     if (p == NULL) {
//         printf("内存分配失败！\n");
//         return 1;
//     }

//     // 2. 指针存取数据
//     printf("请输入 %d 个整数:\n", n);
//     for (int i = 0; i < n; i++) {
//         // 使用指针算术代替下标：*(p + i) 等价于 p[i]
//         scanf("%d", (p + i)); 
//     }

//     // 3. 演示计算
//     int sum = 0;
//     for (int *ptr = p; ptr < p + n; ptr++) {
//         sum += *ptr; // 累加指针指向的值
//     }

//     printf("数组元素总和为: %d\n", sum);
//     printf("首元素地址: %p，末元素地址: %p\n", (void*)p, (void*)(p + n - 1));

//     // 4. 必须释放内存
//     free(p);
//     p = NULL; // 避免野指针

//     printf("内存已释放。\n");
//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>
// #include <string.h>

// // 定义学生结构体
// struct Student {
//     int id;
//     char name[20];
//     float score;
// };

// // 演示：使用指针访问结构体成员，避免传值时的内存拷贝
// void updateScore(struct Student *s, float newScore) {
//     if (s != NULL) {
//         s->score = newScore; // 使用 -> 运算符访问指针指向的成员
//     }
// }

// void printStudent(struct Student s) {
//     printf("学号: %d | 姓名: %-8s | 成绩: %.2f\n", s.id, s.name, s.score);
// }

// int main() {
//     // 1. 初始化结构体数组
//     struct Student class1[2] = {
//         {202601, "Kai", 92.5},
//         {202602, "Alice", 88.0}
//     };

//     printf("原始数据：\n");
//     for (int i = 0; i < 2; i++) printStudent(class1[i]);

//     // 2. 演示通过指针修改数据
//     printf("\n正在更新 Kai 的成绩...\n");
//     updateScore(&class1[0], 98.0);

//     printf("更新后数据：\n");
//     printStudent(class1[0]);

//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>
// #include <stdlib.h>

// // 定义链表节点结构体
// typedef struct Node {
//     int data;           // 数据域
//     struct Node *next;  // 指针域：指向下一个相同类型的节点
// } Node;

// int main() {
//     // 1. 创建头节点
//     Node *head = (Node *)malloc(sizeof(Node));
//     head->data = 100;
//     head->next = NULL;

//     // 2. 插入新节点
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = 200;
//     newNode->next = NULL;
//     head->next = newNode; // 将头节点指向新节点

//     // 3. 遍历链表
//     printf("链表内容展示：\n");
//     Node *current = head;
//     while (current != NULL) {
//         printf("地址 [%p] | 数据: %d | 下一个地址: %p\n", 
//                 (void*)current, current->data, (void*)current->next);
//         current = current->next;
//     }

//     // 4. 清理内存（从头开始释放）
//     free(head->next);
//     free(head);
//     printf("\n动态内存已释放。\n");

//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>

// int main() {
//     FILE *src, *dest;
//     char ch;

//     // 1. 打开源文件（读取模式）
//     src = fopen("source.txt", "r");
//     if (src == NULL) {
//         printf("无法打开源文件！\n");
//         return 1;
//     }

//     // 2. 打开目标文件（写入模式，若不存在则创建）
//     dest = fopen("backup.txt", "w");
//     if (dest == NULL) {
//         fclose(src);
//         return 1;
//     }

//     // 3. 逐字符复制
//     while ((ch = fgetc(src)) != EOF) {
//         fputc(ch, dest);
//     }

//     printf("文件备份成功。\n");

//     fclose(src);
//     fclose(dest);
//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>

// typedef struct {
//     int pointID;
//     double x;
//     double y;
// } SurveyPoint;

// int main() {
//     SurveyPoint points[2] = {
//         {101, 126.63, 45.72}, 
//         {102, 126.64, 45.73}
//     };

//     // 1. 写入结构体到文件
//     FILE *fp = fopen("points.dat", "wb");
//     fwrite(points, sizeof(SurveyPoint), 2, fp);
//     fclose(fp);

//     // 2. 从文件读取并验证
//     SurveyPoint input;
//     fp = fopen("points.dat", "rb");
//     printf("读取到的测绘点数据：\n");
//     while(fread(&input, sizeof(SurveyPoint), 1, fp) == 1) {
//         printf("点号: %d | 坐标: (%.2f, %.2f)\n", input.pointID, input.x, input.y);
//     }
//     fclose(fp);

//     return 0;
// }

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("demo.txt", "w+"); // 读写模式
    fputs("ABCDEFGHIJ", fp);

    // 1. 移动指针到第 5 个字符（偏移量从0开始）
    fseek(fp, 5, SEEK_SET);
    printf("当前指针位置: %ld\n", ftell(fp));
    
    // 2. 修改该位置的字符
    fputc('*', fp); 

    // 3. 读取修改后的内容
    char content[20];
    rewind(fp); // 回到开头
    fgets(content, sizeof(content), fp);
    
    printf("修改后的文件内容: %s\n", content); // 输出应该是 ABCDE*GHIJ

    fclose(fp);
    return 0;
}