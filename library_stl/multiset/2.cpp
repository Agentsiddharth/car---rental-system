#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(50);
    s.insert(20);
    s.insert(40);
    auto it2 = s.upper_bound(20);
    auto it1 = s.lower_bound(20);
    cout << (*it1) << " " << (*it2);

    return 0;
}