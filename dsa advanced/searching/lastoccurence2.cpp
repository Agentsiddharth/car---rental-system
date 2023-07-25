#include <bits/stdc++.h>
using namespace std;
int lastoccurence(int *arry, int n, int k)
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
            if (mid == high || arry[mid] != arry[mid + 1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
}
int main()
{
    int arry[]{10, 15, 20, 20, 40, 40};
    int n = 6, k = 40;
    cout << lastoccurence(arry, n, k);

    return 0;
}