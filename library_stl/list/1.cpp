#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l{1, 2, 3, 4};
    l.push_back(5);
    l.push_back(8);
    l.push_back(0);
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << (*i) << " ";
    }
    cout<<endl;
    l.pop_front();
    l.pop_back();
    for(int x:l){
        cout<<x<<" ";
    }


    return 0;
}