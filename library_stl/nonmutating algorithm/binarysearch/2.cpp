#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int arry[]{1, 2, 3, 4, 5};
    if (binary_search(arry, arry + 5, 4))
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}