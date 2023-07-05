#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l{1, 2, 3, 4};
    list<int>::iterator i = l.begin();
    cout << (*i) << endl;
    i++;
    i = l.insert(i, 5);
    for (int x : l)
    {
        cout << x << " ";
    }
    cout << endl;
    i = l.insert(i, 2, 7);
    for (int x : l)
    {
        cout << x << " ";
    }
    cout << endl;
    l.front() = 10;
    l.back() = 10;
    for (int x : l)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << l.size();

    return 0;
}