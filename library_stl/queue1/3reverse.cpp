#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    queue<int> q;
    stack<int> s;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int k = 3,n=5;
    for (int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }
    for (int i = 0; i < k; i++)
    {
        q.push(s.top());
        s.pop();
    }
    for (int i = 0; i < n-k ; i++)
    {
        q.push(q.front());
        q.pop();
    }

    while(q.empty()==false){
        cout<<q.front()<<" ";
        q.pop();
    }
    

    return 0;
}