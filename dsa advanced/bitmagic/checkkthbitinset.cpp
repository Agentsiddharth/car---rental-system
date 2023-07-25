#include <bits/stdc++.h>
using namespace std;

void check(int n, int k)
{
    if(n&(1<<(k-1))!=0){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
int main()
{
    int n, x;
    cout << "enter any number:";
    cin >> n;
    cout << "enter the position:";
    cin >> x;
    check(n, x);

    return 0;
}