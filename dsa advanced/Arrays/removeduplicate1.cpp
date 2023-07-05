#include <iostream>
#include <set>
using namespace std;
int main()
{
    int arry[]{10, 20, 20, 20, 30, 30, 30, 30};
    int temp[8];
    temp[0] = arry[0];
    int count = 1;
    for (int i = 1; i < 8; i++)
    {
        if (temp[count - 1] != arry[i])
        {
            temp[count] = arry[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
}