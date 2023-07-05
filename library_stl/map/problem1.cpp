#include <iostream>
#include <map>
using namespace std;
map<int, string> m;
void add(int x, string str)
{
    m.insert({x, str});
}
void find(int x)
{
    auto it = m.find(x);
    if (it != m.end())
    {
        cout << (*it).second;
    }
    else
    {
        cout << -1;
    }
}
void printsorted()
{
    for (auto x : m)
    {
        cout << x.second << " " << x.first << endl;
    }
}
void printgreatersorted(int x)
{
    for (auto i = m.lower_bound(x); i != m.end(); i++)
    {
        cout << (*i).second << " " << (*i).first << endl;
    }
}
void printsmallestsorted(int x)
{
    auto it1=m.lower_bound(x);
    for (auto i = m.begin(); i != it1; i++)
    {
        cout << (*i).second << " " << (*i).first << endl;
    }
}
int main()
{
    add(10,"abc");
    add(5,"xyz");
    add(100,"pqr");
    printsorted();
    cout<<endl;
    printgreatersorted(7);
    cout<<endl;
    printsmallestsorted(10);

    return 0;
}