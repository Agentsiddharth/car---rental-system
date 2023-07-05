#include <iostream>
using namespace std;
int max1(int x, int y, int z)
{
    int max = x;
    if (y > x)
    {
        max = y;
    }
    if (z > x)
    {
        max = z;
    }
    return max;
}
int main()
{
    int arry[]{10, 8, 5, 12, 15, 7, 6}, n = 7, k = 3;
    for (int i = 0; i < n-k+1; i++)
    {
        cout<<max1(arry[i],arry[i+1],arry[i+2])<<" ";
        
    }

    return 0;
}