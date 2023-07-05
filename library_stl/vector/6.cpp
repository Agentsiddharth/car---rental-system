#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arry[]{1, 2, 3, 4};
    vector<int> v(arry, arry + 4);
    for (auto i = v.rbegin(); i < v.rend(); i++)
    {
        cout << (*i) << " ";
    }

    return 0;
}
