#include<iostream>
#include<utility>
using namespace std;
int main(){
    pair<int,int> pair1;
    // pair1={1,2};
    // pair1=make_pair(1,2);
    pair<int,int> pair2(10,20);
    pair<char,string>p2('a',"siddharth");
    cout<<pair1.first<<" "<<pair1.second<<endl;
    cout<<pair2.first<<" "<<pair2.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;

    

    return 0;
}