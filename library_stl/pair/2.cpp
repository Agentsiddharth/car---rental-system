#include <iostream>
#include <utility>
using namespace std;
int main()
{
    pair<int, int> p1(1, 3), p2(3, 5);
    cout << (p1 == p2);
    cout << (p1 != p2);
    cout << (p1 > p2);
    cout << (p1 < p2);

    return 0;
}