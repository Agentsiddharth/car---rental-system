#include <iostream>
#include <stack>
using namespace std;
bool match(char a, char b)
{
    return (a == '(' && b == ')' ||
            a == '{' && b == '}' ||
            a == '[' && b == ']');
}
bool ispar(string x)
{
    stack<char> s;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == '(' || x[i] == '{' || x[i] == '[')
        {
            s.push(x.[i]);
        }
        else
        {
            if (s.empty() == true)
            {
                return false;
            }
            else if (match(s.top(), x[i]) == false)
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }
    return (s.empty() == true);
}
int main()
{
    string s;
    getline(cin, s);
    cout << ispar(s);

    return 0;
}