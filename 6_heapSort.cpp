// 写一个基于C++的heap排序算法，并中文注释
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i; // 初始化largest为根节点
    int l = 2 * i + 1; // 左子节点
    int r = 2 * i + 2; // 右子节点

    // 如果左子节点比根节点大，则更新largest
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // 如果右子节点比根节点大，则更新largest
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // 如果largest不是根节点，则交换根节点和largest
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // 递归地对子树进行heapify
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    // 构建heap（二叉树）
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // 一个一个地从heap中取出元素
    for (int i = n - 1; i >= 0; i--) {
        // 把当前根节点（最大值）放到数组末尾
        swap(arr[0], arr[i]);

        // 对剩下的元素重新构建heap
        heapify(arr, i, 0);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    cout << "排序后的数组：\n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

