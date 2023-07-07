#include <bits/stdc++.h>
using namespace std;
void reverse(int *arry, int low, int high)
{
    while (low < high)
    {
        int temp = arry[low];
        arry[low] = arry[high];
        arry[high] = temp;
        low++;
        high--;
    }
}
void leftrotate(int arry[], int n, int d)
{
    d = d % n;
    reverse(arry, 0, d - 1);
    reverse(arry, d, n - 1);
    reverse(arry, 0, n - 1);
}
int main()
{
    int arr[]{1, 2, 3, 4, 5};
    int n = 5;
    int d = 2;
    leftrotate(arr, n, d);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}