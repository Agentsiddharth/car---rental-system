#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> l{10, 20, 30, 40, 50};
    forward_list<int> l1{10, 20, 30, 40, 50};
    forward_list<int> l2{1,2,3,4,5,60};
    forward_list<int> l3{70,1,2,3,4,5,60};
    l.merge(l2);
    l1.merge(l3);
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << (*i) << " ";
    }
    cout<<endl;
    for (auto i = l1.begin(); i != l1.end(); i++)
    {
        cout << (*i) << " ";
    }
    
    return 0;
}