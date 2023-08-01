#include <bits/stdc++.h>
using namespace std;
int binary_search1(int *arry, int low, int high, int k)
{
    int mid = (high + low) / 2;
    if (arry[mid] == k)
    {
        return mid;
    }
    else if (k > arry[mid])
    {
        binary_search1(arry, mid + 1, high, k);
    }
    else
    {
        binary_search1(arry, low, mid - 1, k);
    }
}
int search(int *arry, int n, int k)
{
    if (arry[0] == k)
    {
        return 0;
    }
    int i = 1;
    while (arry[i] < k)
    {
        i *= 2;
    }
    if (arry[i] == k)
    {
        return i;
    }
    else
    {
        return binary_search1(arry, (i / 2) + 1, i - 1, k);
    }
}

int main()
{
    int arry[]{1, 10, 15, 20, 40, 60, 80, 100, 200, 500, 1000, 2000, 5000};
    int n = 13, k = 60;
    cout << search(arry, n, k);
    return 0;
}