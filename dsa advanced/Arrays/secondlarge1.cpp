#include <bits/stdc++.h>
using namespace std;
int largest1(int arry[], int n)
{
    int large = arry[0], pos = 0;
    for (auto i = 1; i < n; i++)
    {
        if (arry[i] > large)
        {
            large = arry[i];
            pos = i;
        }
    }
    return pos;
}

void second(int *arry, int n)
{
    int lar = largest1(arry, n);
    int sec = -1;

    for (int i = 0; i < n; i++)
    {
        if (arry[i] != arry[lar])
        {

            if (arry[i] > arry[sec])
            {
                sec = i;
            }
        }
    }
    cout << sec;
}

int main()
{
    int arry[]{1, 5, 3, 6, 4, 7, 8, 9, 5};
    int n = 9;
    second(arry, n);

    return 0;
}