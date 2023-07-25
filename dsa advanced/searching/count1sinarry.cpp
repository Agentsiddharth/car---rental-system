#include <bits/stdc++.h>
using namespace std;
int count(int *arry, int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arry[mid] == 0)
        {
            low = mid + 1;
        }

        else
        {
            if (mid == 0 || arry[mid - 1] == 0)
            {
                return n - mid;
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
    int arry[]{0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = 12;
    cout << count(arry, n);
    return 0;
}