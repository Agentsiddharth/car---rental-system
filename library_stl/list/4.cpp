#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l1{1, 2, 3, 4};
    list<int> l2{5, 6, 7, 8, 9};
    l1.merge(l2);
    for (auto x : l1)
    {
        cout << x << " ";
    }

    return 0;
}