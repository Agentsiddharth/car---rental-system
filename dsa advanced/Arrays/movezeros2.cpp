#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arry[]{10, 5, 0, 0, 8, 0, 9, 0};
    int n = 8;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arry[i] != 0)
        {
            swap(arry[i], arry[res]);
            res++;
        }
    }
    for (auto x : arry)
    {
        cout << x << " ";
    }

    return 0;
}