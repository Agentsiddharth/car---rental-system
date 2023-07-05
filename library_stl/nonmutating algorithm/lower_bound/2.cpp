#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int arry[]{10, 20, 20, 20, 30, 40};
    int *ptr = lower_bound(arry, arry + 6, 10);
    cout << *ptr << endl;
    cout << ptr - arry << endl;
    int *ptr2 = lower_bound(arry, arry + 6, 25);
    cout << *ptr2 << endl;
    cout << ptr2 - arry << endl;

    // TO check item is present in arry or not

    if ((ptr == arry + 6))
    {
        cout << "not present" << endl;
    }
    else
    {
        cout << "present" << endl;
    }
    return 0;
}