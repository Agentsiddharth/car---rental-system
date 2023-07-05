#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l{1, 5, 6, 2, 3, 4};
    auto i = l.begin();
    i = l.erase(i);
    for (auto x : l)
    {
        cout << x << " ";
    }
    cout << endl;
    l.remove(4);
    for (int x : l)
    {
        cout << x << " ";
    }

    return 0;
}