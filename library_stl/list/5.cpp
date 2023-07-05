#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l{10, 15, 15, 20, 20, 15, 10};
    l.unique();
    for (auto x : l)
    {
        cout << x << " ";
    }
    cout << endl;
    l.sort();
    for (auto x : l)
    {
        cout << x << " ";
    }

    cout << endl;
    l.reverse();
    for (auto x : l)
    {
        cout << x << " ";
    }

    return 0;
}