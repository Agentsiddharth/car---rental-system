#include <iostream>
#include <set>
#include <limits.h>
using namespace std;
set<int> s;
void insert1(int x)
{
    s.insert(x);
}
bool search(int x)
{
    s.count(x);
}
void delete1(int x)
{
    s.erase(x);
}
int getfloor(int x)
{
    auto it = s.upper_bound(x);
    if (it == s.begin())
    {
        if ((*it) == x)
        {
            return (*it);
        }
        else
        {
            return INT_MIN;
        }
    }
    else
    {
        if (it != s.end() && (*it) == x)
        {
            return (*it);
        }
        it--;
        return (*it);
    }
}
int getseling(int x)
{
    auto it = s.lower_bound(x);
    if (it != s.end())
    {
        return (*it);
    }
    else
    {
        return INT_MAX;
    }
}

int main()
{
    insert1(10);
    insert1(20);
    insert1(15);
    insert1(5);
    insert1(25);
    search(15);
    delete1(15);
    search(15);
    getfloor(6);
    getfloor(5);
    getseling(6);
    getseling(25);
    getseling(100);
    getfloor(1);
    return 0;
}