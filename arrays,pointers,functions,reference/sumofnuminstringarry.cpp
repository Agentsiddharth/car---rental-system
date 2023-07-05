#include<iostream>
#include<string>
using namespace std;
int findsum(string s){
    int n=s.length();
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if(isdigit(s[i])){
            sum+=(s[i]) -'0';
        }
        else{
            continue;
        }
    }
    
    return sum;
    

}
int main(){
    string s;
    getline(cin,s);
    cout<<findsum(s);

    return 0;
}