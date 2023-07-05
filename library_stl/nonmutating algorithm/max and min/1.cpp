#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{10, 20, 30, 90, 40, 80, 5};
    auto it = max_element(v.begin(), v.end());
    auto it2 = min_element(v.begin(), v.end());
    cout << (*it) << " " << (*it2) << endl;
    cout << (it - v.begin()) << " " << (it2 - v.begin());

    return 0;
}