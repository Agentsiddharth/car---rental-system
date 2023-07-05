// airthmetic soln

// #include <iostream>
// using namespace std;
// int main()
// {
//     float n = 5, d = 2, a = 2;
//     cout<< ((n / 2)*(2*a + (n - 1)*d));
//     return 0;
// }

// --------------------------------------------------------------------------------------------

// geometric soln
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float n = 4, r = 2, a = 2;

    cout << (a / (1 - r) * (1 - pow(r, n)));
    return 0;
}