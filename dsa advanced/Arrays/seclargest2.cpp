#include <bits/stdc++.h>
using namespace std;
int largest1(int *arr, int n)
{
    int max = arr[0];
    int secmax = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            secmax = max;
            max = arr[i];
        }
        else if (arr[i] != max)
        {
            if (secmax == -1 || arr[i] > secmax)
            {
                secmax = arr[i];
            }
        }
    }
    return secmax;
}

int main()
{
    int arr[]{12, 35, 1, 10, 31, 33, 32};
    cout << largest1(arr, 6);

    return 0;
}