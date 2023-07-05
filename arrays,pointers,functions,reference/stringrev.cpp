#include <iostream>
using namespace std;
void rev(string s)
{
    int n = s.length();
    for (int i = n - 1; i >= 0; i--)
    {
        cout<<s[i];
    }
}
int main()
{
    string s;
    getline(cin, s);
    rev(s);

    return 0;
}