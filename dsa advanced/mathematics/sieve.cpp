#include <bits/stdc++.h>
using namespace std;

void printprimes(int n)
{
    vector<bool> v(n + 1, true);
    for (int i = 2; i*i <= n; i++)
    {

        if (v[i])
        {
            
            for (int j = i * 2; j <= n; j += i)
            {
                v[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (v[i] == true)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    printprimes(n);

    return 0;
}