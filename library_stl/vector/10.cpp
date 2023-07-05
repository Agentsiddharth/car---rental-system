#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4};
    v.clear();
    for (int x : v)
    {
        cout << x;
    }
    cout << v.size() << endl;
    if (v.empty() == true)
    {
        cout << "empty";
    }
    else
    {
        cout << "not empty";
    }

    return 0;
}