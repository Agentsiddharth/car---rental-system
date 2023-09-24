#include <iostream>
using namespace std;
const int m = 3;
const int n = 2;

void print(int arry[m][n]){
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
    int arry[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arry[i][j];
        }
    }
    print(arry);

    return 0;
}