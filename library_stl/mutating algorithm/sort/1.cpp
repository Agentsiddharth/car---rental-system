#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int arry[]{1, 9, 3, 5, 4, 6, 7};
    sort(arry, arry + 7);
    for (int x : arry)
    {
        cout << x << " ";
    }
    cout << endl;
    sort(arry, arry + 7, greater<int>());
    for (int x : arry)
    {
        cout << x << " ";
    }

    return 0;
}