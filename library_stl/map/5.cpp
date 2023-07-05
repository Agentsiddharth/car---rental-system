#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> m;
    m.insert({1, 100});
    m.insert({2, 10000});
    m.insert({3, 1000});
    if (m.count(3) == 0)
        cout << "not found";
    else
        cout << "found";

    return 0;
}