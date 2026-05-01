# 递归：斐波那契数列 (Fibonacci)

## 逻辑描述
斐波那契数列是一个数列，其中每个数是前两个数的和。递归实现是函数调用自身来计算第 n 个斐波那契数。

就像兔子繁殖问题，每对兔子每月生一对新兔子。

## 示例代码
```c
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n = 10;
    printf("第 %d 个斐波那契数是 %d", n, fibonacci(n));
    return 0;
}
```

## 解释说明
在这个例子中，计算第 10 个斐波那契数。fibonacci(10) = fibonacci(9) + fibonacci(8)，以此递归直到基础情况 n <= 1。

斐波那契数列：0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... 第 10 个是 34。

递归简单但效率低，因为有重复计算。时间复杂度是 O(2^n)。