#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6};
    for (int x : v)
    {
        cout << x << endl;
    }
    cout << endl;
    for (int &x : v)
    {
        x = 7;
    }
    cout << endl;
    for (int x : v)
    {
        cout << x << endl;
    }

    return 0;
}