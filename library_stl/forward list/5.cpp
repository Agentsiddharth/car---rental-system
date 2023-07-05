#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> l{10, 20, 30, 40, 50};

    if (l.empty() == true)
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }
    l.clear();
    if (l.empty() == true)
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }

    return 0;
}