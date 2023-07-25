#include <bits/stdc++.h>
using namespace std;
int lastoccurence(int *arry, int low, int high, int k)
{
    int mid = (low + high) / 2;
    if (k > arry[mid])
    {
        lastoccurence(arry, mid + 1, high, k);
    }
    else if (k < arry[mid])
    {
        lastoccurence(arry, low, mid - 1, k);
    }
    else
    {
        if (mid == high || arry[mid] != arry[mid + 1])
        {
            return mid;
        }
        else
        {
            lastoccurence(arry, mid + 1, high, k);
        }
    }
}
int main()
{
    int arry[]{10, 15, 20, 20, 40, 40};
    int low = 0, high = 6, k = 40;
    cout << lastoccurence(arry, low, high, k);

    return 0;
}