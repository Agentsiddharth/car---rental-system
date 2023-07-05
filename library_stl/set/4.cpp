#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(2);
    cout << s.count(3) << endl;
    cout << s.count(2) << endl;
    if (s.count(5))
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}