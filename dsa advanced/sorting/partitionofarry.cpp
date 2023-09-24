#include <iostream>
using namespace std;
void partition1(int *arry, int n, int p)
{
    int low = 0, high = n - 1;
    int temp[high - low + 1], idx = 0;
    for (int i = low; i <= high; i++)
    {
        if (arry[i] <= arry[p])
        {
            temp[idx++] = arry[i];
        }
    }
    for (int i = low; i <= high; i++)
    {
        if (arry[i] > arry[p])
        {
            temp[idx++] = arry[i];
        }
    }
    for (int i = low; i <= high; i++)
    {
        arry[i] = temp[i];
    }
}
int main()
{
    int arr[]{5, 13, 6, 9, 12, 11, 8};
    partition1(arr, 7, 6);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}