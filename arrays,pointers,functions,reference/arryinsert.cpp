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
        for (int i = size - 1; i >= index; i--)
        {
            arry[i + 1] = arry[i];
        }
        arry[index] = element;
        size++;
    }
    return 1;
}
int main()
{
    // int n, index, element;
    // cout << "enter number of element:- ";
    // cin >> n;
    // cout << "enter index:- ";
    // cin >> index;
    // cout << "enter element:- ";
    // cin >> element;

    // int arry[100];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arry[i];
    // }

    // // arry before insertion
    int arry[]{1,2,3,4,5};
    int n=5,index=2,element=333;
    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << " ";
    }
    cout << endl;
    // arry after insertion
    insert1(arry, n, index, element);
    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << endl;
    }

    return 0;
}