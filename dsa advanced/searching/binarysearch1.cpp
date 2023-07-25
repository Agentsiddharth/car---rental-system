#include <bits/stdc++.h>
using namespace std;
int search1(int *arry, int n, int k)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arry[mid] == k)
        {
            return mid;
        }
        else if (k > arry[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arry[]{1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8, k = 5;
    cout<<search1(arry, n, k);

    return 0;
}