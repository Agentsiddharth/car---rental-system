#include <iostream>
using namespace std;
int insert1(int arry[], int size, int index, int element)
{
    if (size >= 100)
    {
        return -1;
    }
    else
    {
        for (int i = index; i <size; i++)
        {
            arry[i] = arry[i+1];
        }
    }
    return 1;
}
int main()
{
    
    int arry[]{1,2,3,4,5};
    int n=5,index=2,element=333;
    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << " ";
    }
    cout << endl;
    // arry after insertion
    insert1(arry, n, index, element);
    n--;
    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << endl;
    }

    return 0;
}