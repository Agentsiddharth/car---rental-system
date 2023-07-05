#include <iostream>
using namespace std;
int short_check(int arry[], int n)
{
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (arry[i] > arry[i + 1])
        {
            flag = false;
            break;
        }
    }
    if (flag == false)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void binary_check(int arry[], int n, int x)
{
    int a = short_check(arry, n);
    if (a == true)
    {
        for (int i = 0; i < n; i++)
        {
            if (arry[i] == x)
            {
                cout << i;
                break;
            }
            else{
                cout<<"element not found";
                break;
            }
        } 
    }
    else 
    {
        cout << "arry is not sorted";
    }
}

int main()
{
    int n, x;
    cout << "enter number of element:-";
    cin >> n;
    cout << "enter the element:-";
    cin >> x;

    int arry[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arry[i];
    }
    binary_check(arry, n, x);
    return 0;
}