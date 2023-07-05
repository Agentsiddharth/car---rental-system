#include <iostream>
using namespace std;
void print(string s, char ch)
{
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != ch)
        {
            cout << s[i];
        }
        else
        {
            break;
        }
    }
}
int main()
{
    string s;
    char ch;
    cout << "enter string:-";
    getline(cin, s);
    cout << "enter character upto which want to print:-";
    cin >> ch;
    print(s, ch);

    return 0;
}