#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    int x;
    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(20);
    s.insert(25);
    auto it = s.lower_bound(2);
    if (it != s.end())
    {
        cout << (*it) << endl;
    }
    else
    {
        cout << "item is greater than number" << endl;
    }

    return 0;
}