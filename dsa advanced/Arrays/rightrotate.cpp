#include <bits/stdc++.h>
using namespace std;
void rightrotate(int *arr, int n, int k)
{
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        arr1[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr1[i];
    }
}
int main()
{
    int arr[]{1, 2, 3, 4, 5};
    int n = 5;
    int d = 2;
    rightrotate(arr, n, d);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}