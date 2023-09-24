#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m = 3, n = 2;
    vector<vector<int>> arry;
    for (int i = 0; i < m; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            v.push_back(10);
        }
        arry.push_back(v);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arry[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}