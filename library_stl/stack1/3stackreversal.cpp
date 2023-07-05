#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<char> s;
    string str = "geeks";
    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }

    while (s.empty() == false)
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}