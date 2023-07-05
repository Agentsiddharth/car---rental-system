#include <iostream>
#include <algorithm>
using namespace std;
struct point
{
    int a, b;
    
};
bool check(point p1, point p2)
{
    return (p1.a > p2.b);
}
int main()
{
    point arry[]{{3, 10}, {2, 8}, {5, 4}};
    sort(arry, arry + 3, check);
    for (auto x : arry)
    {
        cout << x.a << " " << x.b << endl;
    }

    return 0;
}