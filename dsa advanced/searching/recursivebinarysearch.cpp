#include <bits/stdc++.h>
using namespace std;
int search1(int *arry, int low, int high, int k)
{
    int mid = (high + low) / 2;
    if (arry[mid] == k)
    {
        return mid;
    }
    else if (k > arry[mid])
    {
        search1(arry, mid + 1, high, k);
    }
    else
    {
        search1(arry, low, mid - 1, k);
    }
}
int main()
{
    int arry[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 5, low = 0, high = 9;
    cout << search1(arry, low, high, k);

    return 0;
}