#include <bits/stdc++.h>
using namespace std;
void leftrotate(int arry[], int n, int d)
{
    d = d % n;
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arry[i];
    }
    for (int i = d; i < n; i++)
    {
        arry[i - d] = arry[i];
    }
    for (int i = 0; i < d; i++)
    {
        arry[n - d + i] = temp[i];
    }
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