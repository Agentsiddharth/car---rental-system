#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v1{10, 20, 30, 5};
    vector<int> v2{10, 20, 30, 5};
    if (is_permutation(v1.begin(), v1.end(), v2.begin()))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}