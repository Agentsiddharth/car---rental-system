#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arry[]{1, 2, 3, 4, 5};
    fill(arry, arry + 5, 6);
    for (int x : arry)
    {
        cout << x << " ";
    }

    return 0;
}