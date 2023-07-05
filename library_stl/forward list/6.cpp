#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> l{10, 20, 30, 40, 50};
    l.reverse();
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << (*i) << " ";
    }

    return 0;
}