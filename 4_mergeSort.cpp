// 写一个基于C++的merge排序算法，并中文注释
#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // 创建临时数组
    int L[n1], R[n2];

    // 将数据复制到临时数组 L[] 和 R[] 中
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // 归并临时数组到 arr[l..r]
    i = 0; // 初始化第一个子数组的索引
    j = 0; // 初始化第二个子数组的索引
    k = l; // 初始归并子数组的索引
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // 将 L[] 中剩余的元素复制到 arr[] 中
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // 将 R[] 中剩余的元素复制到 arr[] 中
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // 找到中间点
        int m = l + (r - l) / 2;

        // 递归排序左边
        mergeSort(arr, l, m);

        // 递归排序右边
        mergeSort(arr, m + 1, r);

        // 合并排序后的两个数组
        merge(arr, l, m, r);
    }
}

int main() {
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0,n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
