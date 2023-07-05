#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> m;
    m.insert(10);
    m.insert(5);
    m.insert(15);
    m.insert(10);
    m.insert(10);
    for (auto x : m)
    {
        cout << x << " ";
    }
    cout << endl;
    auto it = m.find(10);
    m.erase(it);

    // m.erase(10);
    for (auto x : m)
    {
        cout << x << " ";
    }

    return 0;
}