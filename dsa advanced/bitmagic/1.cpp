#include <bits/stdc++.h>
using namespace std;
void getbinary(int n)
{
    if (n > 1)
    {
        getbinary(n / 2);
    }
    cout << n % 2;
}
int main()
{
    int n;
    cin >> n;
    getbinary(n);
    return 0;
}