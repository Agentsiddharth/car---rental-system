#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
int main()
{
    list<int> l{10, 20, 30, 90, 10, 80, 5};
    cout << count(l.begin(), l.end(), 10);

    return 0;
}