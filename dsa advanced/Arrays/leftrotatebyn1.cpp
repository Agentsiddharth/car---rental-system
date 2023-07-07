#include <bits/stdc++.h>
using namespace std;
void leftrot(int *arr, int n)
{
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}
void value(int *arr, int n, int d)
{
    for (int i = 0; i < d; i++)
    {
        leftrot(arr, n);
    }
}
int main()
{
    int arr[]{1, 2, 3, 4, 5};
    int n = 5;
    int d = 2;
    value(arr, n, d);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}