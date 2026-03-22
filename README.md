# Learning of C

A repository to record my C learning: notes, exercises, and example programs.

## Table of Contents

- [Example Programs](#example-programs)
- [Learning Log](#learning-log)
- [Tips](#tips)

## Example Programs

### Program 1: Simple Divisibility Sum

Basic C program to calculate the sum of numbers divisible by 6 in the range [1,100]:

```c
#include <stdio.h>

int main(void) {
    int i, sum = 0;

    // 判断i是否可以被6整除
    for (i = 1; i <= 100; i++) {
        if (i % 6 == 0) {
            sum = sum + i;
        }
    }

    // 输出结果
    printf("%d\n", sum);
    return 0;
}
```

### Program 2: Optimized Version (Mar. 08)

Optimized version that accepts user input for a custom range:

```c
#include <stdio.h>

int main(void) {
    int a, b;
    int i, sum = 0;

    // 输入区间
    printf("请输入区间 [a, b] 的a和b (用空格隔开): ");
    scanf("%d %d", &a, &b);

    // 判断区间是否正确
    if (a > b) {
        printf("区间错误!\n");
        return 0;
    }

    // 接下来找出区间内最小能被6整除的数
    i = a + (6 - a % 6) % 6;

    // 因为所有符合要求的数构成等差数列所以接下来每次加6
    for (; i <= b; i += 6) {
        sum = sum + i;
    }

    // 输出结果
    printf("[%d, %d] 区间内能被6整除的整数之和为: %d\n", a, b, sum);
    return 0;
}
```

### Program 3: Prime Number Checker

An elegant algorithm to determine if a number is prime, using mathematical optimization:

```c
#include <stdio.h>

int main(void) {
    int n;
    int i;

    printf("请输入一个数字：");
    scanf("%d", &n);

    // 判断输入数字是否属于讨论范围
    if (n < 2) {
        printf("%d既不是素数也不是非素数\n", n);
        return 0;
    }

    // 所有偶数都不是素数
    if (n != 2 && n % 2 == 0) {
        printf("%d不是素数\n", n);
        return 0;
    }

    /*
     * 通过判断小于 √n 的所有数字中是否有因子
     * 如果在小于 √n 的数中发现因子那么这个数就不是素数
     * 因为如果该数是一个合数那么其可以写成两个数（这里设为a、b）的乘积
     * 假设 a<b ，那么 a 必然小于 √n
     * 因此如果找不到小于 √n 的因子这个就不是合数
     * 那么这个数就是素数
     */
    for (i = 3; i * i <= n; i = i + 2) {
        if (n % i == 0) {
            printf("%d不是一个素数\n", n);
            return 0;
        }
    }

    // 考察所有小于 √n 的数字都不是因子则该数为素数
    printf("%d是一个素数\n", n);
    return 0;
}
```

### Program 4: Modular Project Structure

Example of using header files and separate function implementation:

**max.h:**
```c
#ifndef __MAX_H__
#define __MAX_H__
#include <stdio.h>

int findMaxNum(int num1, int num2);

#endif // __MAX_H__
```

**max.c:**
```c
#include "max.h"

int findMaxNum(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}
```

**test.c:**
```c
#include <stdio.h>
#include "max.h"

int main() {
    int a = 10;
    int b = 20;
    int c = findMaxNum(a, b);

    printf("The maximum is: %d\n", c);
    return 0;
}
```

## Learning Log

### Feb. 23

> Due to an oversight while reading the official VS Code documentation on C configuration, I missed a key note: "Starting November 3, 2024, MSYS2 has disabled wildcard support for mingw-w64 by default. This affects how wildcards such as '*.cpp' are handled in build commands." As a result, I struggled through a difficult JSON configuration process. Eventually, with help from Jacktao and J. Tao, the issue was finally resolved. We adopted a WSL + VS Code approach and configured GCC to address the wildcard problem.

### Mar. 08

> A strange thing happened while writing two simple C programs. After several hours, I realized they hadn't been pushed to Git. I asked an AI for help, but it was no use. After trying many methods, the issue still wasn't resolved, and my Git repository remained clean. Eventually, I discovered the culprit: I had added the wildcard `*` in my `.gitignore` file, causing all files to be ignored!

### Mar. 22

> 🎉 **A Breakthrough Achievement!**
>
> After an arduous three-day journey, I've finally achieved what once seemed impossible: a fully functional development environment on my Android tablet. It all started with installing Termux, then configuring Debian through proot, and culminating in bringing VS Code to life on the small screen.
>
> Those three days tested my patience to its limit—countless errors, failed installations, and head-scratching troubleshooting sessions that nearly drove me to despair. There were moments when I seriously questioned whether this was worth the effort. But perseverance paid off, and when everything finally clicked into place, it was pure exhilaration.
>
> Now, with a complete development environment at my fingertips, I can code *anywhere*. The satisfaction is indescribable, and I'm overflowing with enthusiasm right now!

## Tips

- ~~If you use Git through Clash, enable TUN mode before using `git`.~~ *(Note: While I wrote this tip after struggling to resolve the JSON issue, I later found that TUN mode can interfere with the host-to-WSL network mapping on Windows and even cause Git to fail.)*