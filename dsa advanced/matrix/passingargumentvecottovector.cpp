#include <iostream>
#include <vector>
using namespace std;
void print(vector<vector<int>> arry)
{
    for (int i = 0; i < arry.size(); i++)
    {
        for (int j = 0; j < arry[i].size(); j++)
        {
            cout << arry[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int m = 3, n = 3;
    vector<vector<int>> arry;
    for (int i = 0; i < m; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        arry.push_back(v);
    }
    print(arry);

    return 0;
}