#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> l{1, 2, 3, 4, 5, 6};
    auto i = l.insert_after(l.begin(), 50);
    for (int x : l)
    {
        cout << x << " ";
    }
    cout << endl;

    i = l.insert_after(i, {2, 5, 4});
    for (int x : l)
    {
        cout << x << " ";
    }
    cout << endl;
    i = l.emplace_after(i, 40);
    for (int x : l)
    {
        cout << x << " ";
    }
    cout << endl;
    i = l.erase_after(i);
    for (int x : l)
    {
        cout << x << " ";
    }

    return 0;
}