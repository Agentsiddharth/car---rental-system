#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.size()<<endl;
    cout << s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout << s.top()<<endl;
    s.pop();
    cout << s.top()<<endl;
    cout<<s.size()<<endl;
    return 0;
}