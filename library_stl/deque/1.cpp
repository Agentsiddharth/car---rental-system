#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d{1, 2, 3, 4};
    d.push_front(10);
    d.push_back(20);
    for (auto x : d)
    {
        cout << x << " ";
    }
    cout << endl;
    d.front() = 9;
    d.back() = 9;
    for (auto x : d)
    {
        cout << x << " ";
    }
    cout << endl;
    d.pop_front();
    d.pop_back();
    for (auto x : d)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}