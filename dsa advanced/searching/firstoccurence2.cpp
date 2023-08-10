#include <bits/stdc++.h>
using namespace std;
int firstoccurence(int *arry, int n, int k)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (k > arry[mid])
        {
            low = mid + 1;
        }
        else if (k < arry[mid])
        {
            high = mid - 1;
        }
        else
        {
            if (mid == 0 || arry[mid] != arry[mid-1])
            {
                return mid;
            }
            else
            {
               high = mid - 1;
            }
        }
    }
}
int main()
{
    int arry[]{1, 10, 10, 10, 20, 20, 40};
    int n = 7, k = 10;
    cout << firstoccurence(arry, n, k);
    return 0;
}