#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(9);
    s.insert(7);
    auto i = s.find(9);
    if (i == s.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }
    

    return 0;
}