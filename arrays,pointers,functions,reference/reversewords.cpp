#include<iostream>
using namespace std;
void count(string s){
    int n=s.length();
    int count1=0;
    for (int i = n-1; i > 0;  i--)
    {
        cout<<s.find(' ');
    }
    
    
}
// int rev(string s){

// }
int main(){
    string s;
    getline(cin,s);
    count(s);

    return 0;
}