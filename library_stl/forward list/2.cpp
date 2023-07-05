#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> l;
    l.assign({1, 2, 3, 4, 5, 6, 7, 1, 1, 1});
    for (auto i=l.begin();i!=l.end();i++)
    {
        cout << (*i) << " ";
    }
    cout << endl;
    l.remove(1);
    for (int x : l)
    {
        cout << x << " ";
    }
    cout << endl;
    forward_list<int> l2;
    l2.assign(l.begin(), l.end());
    for (int x : l)
    {
        cout << x << " ";
    }

    return 0;
}