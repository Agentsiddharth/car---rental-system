#include <iostream>
using namespace std;
int main()
{
    int m = 3, n = 2;
    int *arry[m];
    for (int i = 0; i < m; i++)
    {
        arry[i] = new int[n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arry[i][j] = 10;
            cout << arry[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}