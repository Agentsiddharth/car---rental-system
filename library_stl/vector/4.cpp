#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 4, x = 20;
    vector<int> v(n, x);
    for (auto i = v.begin(); i < v.end(); i++)
    {
        cout << (*i) << endl;
    }

    return 0;
}