#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v{1, 9, 3, 5, 4, 6, 7};
    sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), greater<int>());
    for (auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}