#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a1[]{10, 20, 30, 90, 10, 80, 5};
    cout << count(a1, a1 + 7, 10);

    return 0;
}