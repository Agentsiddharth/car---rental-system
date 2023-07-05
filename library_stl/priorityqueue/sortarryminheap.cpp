#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int arry[]{10, 5, 20, 13, 50};
    // using minimum heap
    cout << "using minimum heap" << endl;
    priority_queue<int, vector<int>, greater<int>> q(arry, arry + 5);
    while (q.empty() == false)
    {
        cout << q.top() << " ";
        q.pop();
    }
    return 0;
}