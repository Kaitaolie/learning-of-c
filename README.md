# learning-of-c

A repository to record my C learning: notes, exercises and example programs.

## Table of Content
*    [Example Program](#example-programs)
*    [Learning Log](#learning-log)
*    [Tips](#tips)

##  Example Programs
*    A simple C program.
   ```cpp
     #include <stdio.h>          //头文件
     int main(void)              //主函数
     {                           //主函数开始
     int i, sum = 0;             //定义变量i和sum的数据类型并赋值

     for(i=1; i<=100; i++){      //for循环开始
        if(i%6== 0){             //判断i是否可以被6整除
            sum = sum + i;       //所有可以被6整除累加并赋给sum
        }
     }
     printf("%d\n", sum);        //输出运算结果

     return 0;
     }                           //运行结束
   ```
   Today is Mar. 08 and I have optimized this code.
   ```cpp
     #include <stdio.h>
     int main(void) {
         int a, b;                                           // 定义区间端点
         int i, sum = 0;
    
   
         printf("请输入区间 [a, b] 的a和b (用空格隔开) : ");   // 输入区间
         scanf("%d %d", &a, &b);
    
         if (a > b){
             printf("区间错误!\n");                          // 判断区间是否正确
             return 0;
         }
    
         i = a + (6 - a % 6) % 6;
    
         for (; i <= b; i += 6) {
            sum =sum + i;                                    // 从第一个能被6整除的数，每次加6，直接累加所有能被6整除的数
         }
    
         printf("[%d, %d] 区间内能被6整除的整数之和为: %d\n", a, b, sum);
         return 0;
     }
   ```

## Learning Log

- Feb. 23
     >Due to an oversight while reading the official documentation on configuring C in VSCode, I missed a key note stating: "Starting November 3, 2024, MSYS2 has disabled wildcard support for mingw-w64 by default. This affects how wildcards such as '*.cpp' are handled in build commands." As a result, I struggled through a difficult JSON configuration process. Eventually, with help from Jacktao and J. tao, the issue was finally resolved. We ended up adopting a WSL + VS Code approach and configuring GCC to address the wildcard problem. The process was somewhat involved, so I won't delve into the details here.
- Mar. 08
   >A really bizarre thing happened today. I was writing two simple C programs, but after several hours, I realized they hadn't been pushed to Git. I asked an AI for help, but it was no use. After trying many methods, the issue still wasn't resolved, and my Git repository was clean. After some twists and turns, I discovered that it was actually because I added the wildcard `*` in my .gitignore file, causing all files to be ignored. It's really laughable that this happened (it made me tense for a while).
 

## Tips

- ~~If you use Git through Clash, enable TUN mode before using `git`.~~*(Throgh I worte this tip not long ago, while struggling to resolve the JSON issue, I updated Clash and found that whether TUN mode may interfere with the host-to-WSL network mapping on Windows, it can even cause git to fail. )*