#include <iostream>
using namespace std;
void print(int *arry[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arry[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    cin >> m >> n;
    int *arry[m];
    for (int i = 0; i < m; i++)
    {
        arry[i] = new int[n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arry[i][j];
        }
    }
    print(arry, m, n);

    return 0;
}