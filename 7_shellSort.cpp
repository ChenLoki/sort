#include "data.h"

// https://baijiahao.baidu.com/s?id=1719645128431014366&wfr=spider&for=pc∂
//https://blog.csdn.net/m0_63033419/article/details/127524644
//https://www.bilibili.com/video/BV1BK4y1478X/?spm_id_from=333.788&vd_source=7262ac2e976dece7e6dfead56167a8fd

void shell_sort(std::vector<int>& arr, int len)
{
    int inc, i, j;
    int temp;
    for (inc = len/2; inc > 0; inc >>= 1)
    {
        for (i = inc; i < len; i++)
        {
            temp = arr[i];
            for (j = i - inc; j >= 0 && arr[j] > temp; j -= inc)
                arr[j + inc] = arr[j];
            
            arr[j + inc] = temp;
            
            printArray();
        }
    }
}

int main()
{
    shell_sort(arr,(int)arr.size());
    
    return 0;
}



/*

// 写一个基于C++的shell排序算法，并中文注释
#include <iostream>
using namespace std;

void shellSort(int arr[], int n) {
    // 初始化间隔为n/2
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // 对每个间隔进行插入排序
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {
    int arr[] = { 12, 34, 54, 2, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "排序前：";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    shellSort(arr, n);

    cout << "\n排序后：";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}



*/