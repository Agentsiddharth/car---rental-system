#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arry[]{10, 20, 20, 30, 50, 20};
    int *ptr = find(arry, arry + 6, 20);
    if (ptr == arry + 6)
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found at: " << ptr - arry << endl;
    }

    return 0;
}