#include <iostream>
#include <stack>
using namespace std;
void checkarry(int *arry,int n){
    stack<int> s;
    s.push(arry[n-1]);
    for (int i = n-2; i >=0; i--)
    {
        
    }
    
}
int main()
{
    int arry[]{5, 15, 10, 8, 6, 12, 9, 18}, n = 8;
    checkarry(arry,n);

    return 0;
}