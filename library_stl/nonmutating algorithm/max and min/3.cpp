#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v{30, 20, 5, 10, 6, 10, 10};
    cout << count(v.begin(), v.end(), 10);

    return 0;
}