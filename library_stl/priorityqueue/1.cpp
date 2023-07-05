#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> q;
    q.push(5);
    q.push(15);
    q.push(10);
    q.push(8);
    cout << q.size() << " ";
    cout << q.top();
    cout << endl;

    while (q.empty() == false)
    {
        cout << q.top() << " ";
        q.pop();
    }

    return 0;
}