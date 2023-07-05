#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;
void shortarry(int arry[], int n)
{
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({arry[i], i});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << "  " << v[i].second << endl;
    }
}

int main()
{
    int arry[]{20, 40, 30, 10};
    shortarry(arry,4);

    return 0;
}