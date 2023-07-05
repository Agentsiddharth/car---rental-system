#include <iostream>
#include <queue>
using namespace std;
void maxpurchase(int *arry, int n, int sum)
{
    priority_queue<int, vector<int>, greater<int>> q(arry,arry+n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(q.top()<=sum){
            sum-=q.top();
            q.pop();
            count++;
        }
        
    }
    cout<<count;
}
int main()
{
    // int arry[]{1, 12, 5, 111, 200}, sum = 10, n = 5;
    int arry[]{20,10,5,30,100}, sum = 35, n = 5;
    maxpurchase(arry, n, sum);

    return 0;
}