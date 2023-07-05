#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a1[]{10, 20, 30, 90, 40, 80, 5};
    int *ptr = max_element(a1, a1 + 7);
    int *ptr2 = min_element(a1, a1 + 7);
    cout << (*ptr) << " " << (*ptr2) << endl;
    cout << (ptr - a1) << " " << (ptr2 - a1);

    return 0;
}