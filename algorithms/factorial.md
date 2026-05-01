# 递归：阶乘 (Factorial)

## 逻辑描述
阶乘是所有小于等于某个正整数的正整数的积。用递归实现是 n! = n * (n-1)!，直到 n=0 时为 1。

就像计算 5! = 5 × 4 × 3 × 2 × 1。

## 示例代码
```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    int n = 5;
    printf("%d! = %d", n, factorial(n));
    return 0;
}
```

## 解释说明
在这个例子中，计算 5!。factorial(5) = 5 * factorial(4)，factorial(4) = 4 * factorial(3)，以此类推，直到 factorial(0) = 1。

结果是 5! = 120。

递归适合这种定义，但对于大 n 可能栈溢出。时间复杂度是 O(n)。