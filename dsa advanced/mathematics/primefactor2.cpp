#include <iostream>
using namespace std;
void primefactor(int n)
{
    if (n < 1)
    {
        cout << 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 1)
    {
        cout << n;
    }
}
int main()
{
    int n;
    cin >> n;
    primefactor(n);
    return 0;
}