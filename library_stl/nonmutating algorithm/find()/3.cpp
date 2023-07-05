#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    list<int> l{1,2,3,4,5};
    auto it=find(l.begin(),l.end(),3);
    if(it==l.end()){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found";
    }
    
    return 0;
}