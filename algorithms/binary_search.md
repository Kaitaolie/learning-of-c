# 二分搜索 (Binary Search)

## 逻辑描述
二分搜索是一种高效的搜索算法，但要求数组必须是有序的。它的工作原理是将数组分成两半，比较中间元素与目标值，如果相等则找到，否则在左半或右半继续搜索。

就像猜数字游戏，猜中间值，根据反馈调整范围。

## 示例代码
```c
#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n-1, x);
    if (result == -1) {
        printf("元素不在数组中");
    } else {
        printf("元素在索引 %d 处", result);
    }
    return 0;
}
```

## 解释说明
在这个例子中，有序数组 {2, 3, 4, 10, 40}，找 10。中间是 4 (索引 2)，4 < 10，所以在右半继续。右半中间是 10，找到，返回索引 3。

二分搜索的时间复杂度是 O(log n)，比线性搜索快得多，但需要有序数组。