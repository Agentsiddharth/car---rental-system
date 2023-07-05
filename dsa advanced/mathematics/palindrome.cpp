#include <iostream>
using namespace std;
bool palindrome(int n)
{
    int rev = 0;
    int temp = n;
    while (temp != 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    return (rev == n);
}
int main()
{
    int n;
    cin >> n;
    cout<<palindrome(n);

    return 0;
}