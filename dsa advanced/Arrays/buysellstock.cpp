#include <bits/stdc++.h>
using namespace std;
void buysell(int *arry, int n)
{
    int profit = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arry[i] < arry[i + 1])
        {
            profit += (arry[i + 1] - arry[i]);
        }
    }
    cout << profit;
}
int main()
{
    int arry[]{1, 5, 3, 8, 12};
    int n = 5;
    buysell(arry, n);
    return 0;
}