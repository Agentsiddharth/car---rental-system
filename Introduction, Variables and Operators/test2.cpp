// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     for (int i = 0; i < s.length();i++)
//     {
//         cout<<char(s[i]-'a'+'A');
//     }
    


//     return 0;
// }



#include<iostream>
using namespace std;
int count(int n){
    int rem,rev=0;
    while(n>0){
        rem=n%10;
        rev++;
        n/=10;
    }
    return rev;

}
int main(){
    int n;
    cin>>n;
    cout<<count(n);
    return 0;
}