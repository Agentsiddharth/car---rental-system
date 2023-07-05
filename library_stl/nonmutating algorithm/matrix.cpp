#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;

    int arry[3][5] = {{2, 4, 6, 8, 10}, {1, 3, 5, 7, 9}, {100, 200, 400, 500, 800}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            v.push_back(arry[i][j]);
        }
    }
    sort(v.begin(), v.end());
    int n = v.size();
    cout << v[((n + 1) / 2) - 1];

    return 0;
}