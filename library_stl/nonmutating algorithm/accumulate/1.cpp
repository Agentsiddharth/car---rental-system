#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{10, 30, 50};
    int res = 0;
    cout << accumulate(v.begin(), v.end(), res);
    return 0;
}