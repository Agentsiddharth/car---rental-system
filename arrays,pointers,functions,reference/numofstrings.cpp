#include<iostream>
using namespace std;
int count1(string s){
    int size=s.length();
    int count=0;
    for (int i = 0; i < size; i++)
    {
        count+=1;
    }
    return count;
    
    
}
int main(){
    string s;
    getline(cin,s);
    cout<<count1(s);

    return 0;
}