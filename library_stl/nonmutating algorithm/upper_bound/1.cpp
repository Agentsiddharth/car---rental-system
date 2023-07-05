#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{10, 20, 20, 20, 30, 40};
    auto it = upper_bound(v.begin(), v.end(), 20);
    cout << (*it) << endl;
    cout << (it - v.begin()) << endl;
    auto it2 = upper_bound(v.begin(), v.end(), 30);
    cout << (*it2) << endl;
    cout << (it2 - v.begin()) << endl;
    cout << endl;
    if (it == v.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found at: " << it - v.begin() << endl;
    }

    return 0;
}