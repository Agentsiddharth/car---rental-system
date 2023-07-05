#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{10, 20, 30, 40, 50, 60};
    int x = 30;
    if (binary_search(v.begin(), v.end(), x))
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}