#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);
    auto it = s.find(5);
    s.erase(it);
    for (auto x : s)
    {
        cout << x << " ";
    }
    return 0;
}