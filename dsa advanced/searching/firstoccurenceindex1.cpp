#include <bits/stdc++.h>
using namespace std;
int firstoccurence(int *arry, int low, int high, int k)
{
    int mid = (low + high) / 2;
    if (k > arry[mid])
    {
        firstoccurence(arry, mid + 1, high, k);
    }
    else if (k < arry[mid])
    {
        firstoccurence(arry, low, mid - 1, k);
    }
    else
    {
        if (mid == 0 || arry[mid] != arry[mid - 1])
        {
            return mid;
        }
        else
        {
            firstoccurence(arry, low, mid - 1, k);
        }
    }
}
int main()
{
    int arry[]{1, 10, 10, 10, 20, 20, 40};
    int high = 7, low = 0, k = 20;
    cout << firstoccurence(arry, low, high, k);
    return 0;
}