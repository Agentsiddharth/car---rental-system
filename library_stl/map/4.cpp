#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m.insert({1, "siddharth"});
    m.insert({2, "harsh"});
    m.insert({3, "jalaj"});
    m.insert({4, "ujjwal"});

    if (m.find(4) == m.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found";
    }
    cout << endl;
    for (auto i = m.find(3); i != m.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }

    return 0;
}