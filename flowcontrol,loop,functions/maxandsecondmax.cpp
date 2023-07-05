#include <iostream>
using namespace std;
void max(int arry[], int n)
{
    int large = arry[0];
    for (int i = 1; i < n; i++)
    {
        if (large < arry[i])
        {
            large = arry[i];
            
        }
        break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arry[i];
    }
    cout<< large;
}
// int second_max(int arry[], int n)
// {
//     int secmax = arry[0];
//     int max1 = max(arry, n);
//     for (int i = 1; i < n; i++)
//     {
//         if (secmax > arry[i] && secmax < max1)
//         {
//             secmax += 0;
//         }
//         else
//         {
//             secmax = arry[i];
//         }
//         return secmax;
//     }
// }
int main()
{
    int n;
    cin >> n;
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arry[i];
    }
    max(arry,n);
    return 0;
}