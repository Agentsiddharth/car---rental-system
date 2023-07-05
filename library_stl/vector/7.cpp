#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << (v.at(i)) << " ";
    }
    cout << endl;

    cout << v.front() << endl;
    cout << v.back() << endl;

    v.front() = 100;
    v.back() = 90;
    cout << v.front() << endl;
    cout << v.back() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << (v.at(i)) << " ";
    }

    return 0;
}