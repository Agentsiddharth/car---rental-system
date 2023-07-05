#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int arry[]{10, 5, 20, 13, 50};
    //    using maximum heap
    cout << "using maximum heap" << endl;
    priority_queue<int> q1(arry, arry + 5);
    for (int i = 4; i >= 0; i--)
    {
        arry[i] = q1.top();
        q1.pop();
    }

    for (int x : arry)
    {
        cout << x << " ";
    }

    return 0;
}