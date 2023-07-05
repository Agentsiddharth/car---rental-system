#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6};
    for (auto i = v.rbegin(); i < v.rend(); i++)
    {
        cout << (*i) << endl;
    }

    return 0;
}