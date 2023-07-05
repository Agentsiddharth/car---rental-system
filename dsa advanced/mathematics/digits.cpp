// iterative solution

// #include <iostream>
// using namespace std;
// void getdigit(int x)
// {
//     int count = 0, rem = 0;
//     while (x != 0)
//     {
//         x /= 10;
//         count++;
//     }
//     cout << count << endl;
// }

// int main()
// {
//     int x;
//     cin >> x;
//     getdigit(x);
//     return 0;
// }

// -----------------------------------------------------------------------------------------------

// recursive solution

// #include <iostream>
// using namespace std;
// int getcount(int x)
// {
//     if (x == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1 + getcount(x / 10);
//     }
// }
// int main()
// {
//     int x;
//     cin >> x;
//     cout << getcount(x);

//     return 0;
// }

// ----------------------------------------------------------------------------------------------

// logarithmic solution

#include <iostream>
#include <cmath>
using namespace std;
int getcount(int n)
{
    return floor(log10(n) + 1);
    // return ceil(log10(n));
}
int main()
{
    int x;
    cin >> x;
    cout << getcount(x);
    return 0;
}