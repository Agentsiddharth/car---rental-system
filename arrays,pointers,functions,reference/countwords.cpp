#include <iostream>
using namespace std;
int count(string s)
{
    int count1 = 1;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            count1 += 1;
        }
    }
    return count1;
}
int main()
{
    string s;
    getline(cin, s);
    cout << count(s);

    return 0;
}