#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m = 3, n = 2;
    vector<int> v[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v[i].push_back(10);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}