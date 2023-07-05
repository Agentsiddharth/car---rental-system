#include <iostream>
#include <queue>
using namespace std;
void kthmax(int *arry, int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> q(arry, arry + n);
    for (int i = 0; i < n - k; i++)
    {
        q.pop();
    }
    while (q.empty()==false)
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    
}
int main()
{
    int n, k;
    cout << "enter number of element in arry:" << endl;
    cin >> n;
    cout << "enter elements: " << endl;

    int arry[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arry[i];
    }
    cout << "enter kth largest element: " << endl;
    cin >> k;
    kthmax(arry, n, k);

    return 0;
}