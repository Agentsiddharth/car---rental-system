#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> l;
    l.assign(5, 10);
    for (forward_list<int>::iterator i = l.begin(); i != l.end(); i++)
    {
        cout << (*i) << endl;
    }

    return 0;
}