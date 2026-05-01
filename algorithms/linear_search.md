# 线性搜索 (Linear Search)

## 逻辑描述
线性搜索是最简单的搜索算法。它的工作原理是从数组的第一个元素开始，一个一个检查每个元素，直到找到目标元素或检查完所有元素。

就像在书架上从左到右一本一本找书。

## 示例代码
```c
#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; // 返回索引
        }
    }
    return -1; // 未找到
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    int result = linearSearch(arr, n, x);
    if (result == -1) {
        printf("元素不在数组中");
    } else {
        printf("元素在索引 %d 处", result);
    }
    return 0;
}
```

## 解释说明
在这个例子中，数组 {2, 3, 4, 10, 40}，我们要找 10。从索引 0 开始检查，2 != 10, 3 != 10, 4 != 10, 10 == 10，返回索引 3。

线性搜索的时间复杂度是 O(n)，适用于小数组或无序数组。