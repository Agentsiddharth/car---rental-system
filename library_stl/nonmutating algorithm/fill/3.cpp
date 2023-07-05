#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s="geeksforgeeks";
    fill(s.begin(),s.end(),'e');
    cout<<s;

    
    return 0;
}