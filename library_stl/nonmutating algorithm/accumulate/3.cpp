#include <iostream>
#include <numeric>
using namespace std;
int myfun(int x, int y)
{
    return x * y;
}

int main()
{
    int arry[]{10, 20, 30, 40};
    int res = 1;
    cout << accumulate(arry, arry + 4, res, myfun);

    return 0;
}
