#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v{60, 20, 40, 10, 50};
    auto it = find(v.begin(), v.end(), 10);
    if (it == v.end())
    {
        cout << "item not found" << endl;
    }
    else
    {
        cout << "item found at:" << (it-v.begin()) << endl;
    }

    return 0;
}