#include <iostream>
using namespace std;
int getcounttrail(int n)
{
    int count = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        count += n / i;
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << getcounttrail(n);
    return 0;
}