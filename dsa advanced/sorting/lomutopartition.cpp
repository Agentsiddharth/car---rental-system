#include <iostream>
#include <algorithm>
using namespace std;
int lomuto(int *arry, int low, int high)
{
    int pivot = arry[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arry[j] < pivot)
        {
            i++;
            swap(arry[i], arry[j]);
        }
    }

    swap(arry[i + 1],arry[high]);
}
int main()
{
    int arr[]{10, 80, 30, 90, 40, 50, 70};
    int n = 7;
    lomuto(arr, 0, n - 1);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}