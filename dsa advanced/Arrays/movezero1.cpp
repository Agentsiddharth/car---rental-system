#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arry[]{10, 5, 0, 0, 8, 0, 9, 0};
    int n = 8;
    for (int i = 0; i < n; i++)
    {
        if (arry[i] == 0)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arry[j] != 0)
                {
                    swap(arry[i], arry[j]);
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << " ";
    }

    return 0;
}