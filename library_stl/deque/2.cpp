#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d{1, 2, 3, 4};
    deque<int>::iterator it = d.begin();
    cout << (*it);
    it++;
    cout << endl;
    it = d.insert(it, 5);
    for (auto x : d)
    {
        cout << x << " ";
    }
    cout<<endl;
    cout<<d.size();
    return 0;
}