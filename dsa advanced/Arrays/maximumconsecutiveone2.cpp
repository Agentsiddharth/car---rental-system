#include <bits/stdc++.h>
using namespace std;
void consecutive(int *arry, int n)
{
    int res = 0, cur = 0;
    for (int i = 0; i < n; i++)
    {
        if (arry[i] == 0)
        {
            cur = 0;
        }
        else
        {
            cur++;
            res = max(res, cur);
        }
    }
    cout << res;
}
int main()
{
    int arry[]{1, 0, 1, 1, 1, 1, 0, 1, 1};
    int n = 9;
    consecutive(arry, n);
    return 0;
}