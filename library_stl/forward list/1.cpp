#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> l{1, 2, 3, 4, 5, 6};
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    l.push_front(40);
    l.pop_front();
    for (int x : l)
    {
        cout << x << " ";
    }

    return 0;
}
