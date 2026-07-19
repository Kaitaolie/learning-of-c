// C++ 版冒泡排序：使用引用替代指针，利用 STL 简化代码

#include <iostream>
#include <vector>
#include <algorithm> // std::swap
using namespace std;

void bubble(vector<int> &a);

int main()
{
    int n;
    cout << "Enter n(n<=10): ";
    if (!(cin >> n) || n <= 0 || n > 10) {
        cerr << "Invalid input: n must be 1~10" << endl;
        return 1;
    }

    vector<int> a(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        if (!(cin >> a[i])) {
            cerr << "Invalid integer input" << endl;
            return 1;
        }
    }

    bubble(a);

    cout << "After Sorted: ";
    for (int x : a) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}

void bubble(vector<int> &a)
{
    int n = a.size();
    for (int i = 1; i < n; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i; j++) {
            if (a[j] > a[j + 1]) {
                std::swap(a[j], a[j + 1]); // 使用标准库 swap
                swapped = true;
            }
        }
        if (!swapped) break; // 提前终止：本轮无交换说明已有序
    }
}

// 在 C++ 中，引用比指针更安全常用，避免指针的频繁使用导致的潜在错误