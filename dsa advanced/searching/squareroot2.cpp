#include <bits/stdc++.h>
using namespace std;
int square(int n)
{
    int low = 0, high = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if ((mid * mid) == n)
        {
            return mid;
        }
        else if ((mid * mid) > n)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    cout << square(n);
    return 0;
}