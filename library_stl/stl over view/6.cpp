#include<iostream>
using namespace std;
template<typename T>
struct test1{
    T a,b;
    test1(T x,T y){
        a=x;
        b=y;
    }
    T getdata1(){
        return a; 
    }
    T getdata2(){
        return b;
    }

};
int main(){
    struct test1<int>t1(5,6);
    cout<<t1.getdata1()<<endl;
    cout<<t1.getdata2();

    
    return 0;
}