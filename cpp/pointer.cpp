// #include <stdio.h>
// #define MAXN 10
// void swap(int *px, int *py), bubble (int a[], int n);
// int main(void)
// {
//     int n, a[MAXN];
//     int i;
//     printf("Enter n(n<=10):");
//     if(scanf("%d", &n) != 1) return 1;
//     printf("Enter %d intergers: ", n);

//     for(i = 0; i < n; i ++){
//         if(scanf("%d", &a[i]) != 1) return 2;
//     }

//     bubble(a, n);
//     printf("After Sorted:");

//     for(i = 0; i < n; i ++){
//         printf("%-3d ", a[i]);
//     }

//     printf("\n");
//     return 0;
// }

// void swap(int *px, int *py){
//     int t;
//     t = *px;
//     *px =*py;
//     *py = t;
// }

// void bubble (int a[], int n){
//     int i, j, t;
//     for(i = 1; i < n; i ++){
//         for(j = 0; j < n - i; j ++){
//             if(a[j] > a[j + 1]){
//                 swap(&a[j], &a[j + 1]);
//             }
//         }
//     }
// }

// 这是一个 c 语言程序，现在将它改写成 c++ 语言程序：

#include <iostream>
#include <vector>
using namespace std;
void swap(int &px, int &py), bubble (vector<int> &a, int n);
int main()
{
    int n;
    cout << "Enter n(n<=10):";
    cin >> n;
    vector<int> a(n);
    cout << "Enter " << n << " integers: ";
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    bubble(a, n);
    cout << "After Sorted: ";
    for(int i = 0; i < n; i ++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

void swap(int &px, int &py){
    int t;
    t = px;
    px = py;
    py = t;
}

void bubble (vector<int> &a, int n){
    for(int i = 1; i < n; i ++){
        for(int j = 0; j < n - i; j ++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
            }
        }
    }
}