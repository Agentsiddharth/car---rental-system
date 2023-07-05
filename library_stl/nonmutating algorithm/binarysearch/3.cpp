#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct point
{
    int x, y;
    point(int a, int b)
    {
        x = a;
        y = b;
    }
};
bool check1(point p1, point p2)
{
    return (p1.x < p2.x);
}

int main()
{
    vector<point> v{{10, 5}, {2, 100}, {50, 91}};
    sort(v.begin(), v.end(), check1);
    point p(2, 100);
    if (binary_search(v.begin(), v.end(), p, check1))
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}