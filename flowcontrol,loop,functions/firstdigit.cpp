#include <iostream>
using namespace std;
void digit(int n)
{
    int first, rem = 0;
    while (n > 0)
    {
        rem=n%10;
        first=rem;
        n /= 10;
    }
    cout <<first;
}

int main()
{
    int n;
    cin >> n;
    digit(n);
    return 0;
}