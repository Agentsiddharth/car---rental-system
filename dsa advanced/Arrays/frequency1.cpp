#include <bits/stdc++.h>
using namespace std;
void freq(int arry[], int n)
{
    int res = 0, count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arry[i] != arry[res])
        {
            res = i;
            count++;
        }
    }
    cout << count;
}
int main()
{
    int arry[]{10, 10, 10, 25, 30, 30};
    int n = 6;
    freq(arry, n);
    return 0;
}