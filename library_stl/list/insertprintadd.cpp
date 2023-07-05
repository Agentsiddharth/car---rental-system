#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;
list<int> l;
void insert1(int x)
{
    l.push_back(x);
}
void print()
{
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << (*i) << " ";
    }
}
void implement(int x, vector<int> &v)
{
    auto i = find(l.begin(), l.end(), x);
    if (i == l.end())
    {
        return;
    }
    i = l.erase(i);
    i = l.insert(i, v.begin(), v.end());
}
int main()
{
    insert1(3);
    insert1(10);
    insert1(2);
    insert1(10);
    print();
    cout << endl;
    vector<int> v{1, 2, 3, 4};
    implement(10, v);
    print();

    return 0;
}