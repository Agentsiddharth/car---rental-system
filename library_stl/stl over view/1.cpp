#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arry={1,2,3,4,5};
    vector<int>::iterator i=arry.begin();
    cout<<(*i)<<" ";
    i++;
    cout<<(*i)<<" ";
    i=arry.end();
    i--;
    cout<<(*i)<<" ";

    return 0;
}