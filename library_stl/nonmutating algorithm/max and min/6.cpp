#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s = "aaabbbbbccc";
    cout << count(s.begin(), s.end(), 'b');
    return 0;
}