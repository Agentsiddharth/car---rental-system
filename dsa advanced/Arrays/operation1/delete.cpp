#include <bits/stdc++.h>
using namespace std;
int delete1(int *arry, int n, int x)
{
    int pos = 0;

    for (int i = 0; i < n; i++)
    {
        if (x == arry[i])
        {
            pos = i;
            break;
        }
    }
    for (int i = pos; i < n; i++)
    {
        arry[i] = arry[i + 1];
    }
    return n - 1;
}
int main()
{
    int arry[]{3, 8, 12, 5, 16};
    int n = 5;
    int x;
    cout << "enter the element: ";
    cin >> x;
    cout << "before delete" << endl;
    for (int x : arry)
    {
        cout << x << " ";
    }
    cout << endl;
    n = delete1(arry, n, x);
    cout << "after delete" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << " ";
    }

    return 0;
}
