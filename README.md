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
        if(i%2!= 0){             //判断i是否为奇数
            sum = sum + i;       //将奇数累加并赋给sum
        }
     }
     printf("%d\n", sum);        //输出运算结果

     return 0;
     }                           //运行结束
   ```

## Learning Log

- Feb. 23
     >Due to an oversight while reading the official documentation on configuring C in VSCode, I missed a key note stating: "Starting November 3, 2024, MSYS2 has disabled wildcard support for mingw-w64 by default. This affects how wildcards such as '*.cpp' are handled in build commands." As a result, I struggled through a difficult JSON configuration process. Eventually, with help from Jacktao and J. tao, the issue was finally resolved. We ended up adopting a WSL + VS Code approach and configuring GCC to address the wildcard problem. The process was somewhat involved, so I won't delve into the details here.

 

## Tips

- ~~If you use Git through Clash, enable TUN mode before using `git`.~~*(Throgh I worte this tip not long ago, while struggling to resolve the JSON issue, I updated Clash and found that whether TUN mode may interfere with the host-to-WSL network mapping on Windows, it can even cause git to fail. )*