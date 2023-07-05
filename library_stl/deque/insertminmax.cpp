#include <iostream>
#include <deque>
using namespace std;
deque<int> d;
void insertmin(int x)
{
    d.push_front(x);
}
void insertmax(int x)
{
    d.push_back(x);
}
void getmin()
{
    cout << d.front();
}
void getmax()
{
    cout << d.back();
}
void extractmin()
{
    d.pop_front();
}
void extractmax()
{
    d.pop_back();
}

int main()
{
    insertmin(5);
    insertmax(10);
    insertmin(3);
    insertmax(15);
    insertmin(2);
    cout << endl;
    getmin();
    cout << endl;
    getmax();
    cout << endl;
    insertmin(1);
    cout << endl;
    getmin();
    cout << endl;
    extractmin();
    cout << endl;
    extractmax();
    cout << endl;
    getmin();
    cout << endl;
    getmax();

    return 0;
}