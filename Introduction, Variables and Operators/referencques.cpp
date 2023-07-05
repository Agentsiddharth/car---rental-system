// #include<iostream>
// using namespace std;
// int main(){
//     int x=10,z=20;
//     int &y=x;
//     y=z;
//     y+=5;
//     cout<<x<<" "<<y<<" "<<z;
    
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int &fun(){
//     static int x=10;
//     return x;
// }
// int main(){
//     int &z=fun();
//     cout<<z<<" "<<fun()<<endl;
//     z=30;
//     cout<<z<<" "<<fun();
//     return 0;
// }




// #include<iostream>
// using namespace std;
// void fun(int &y){
//     y+=5;
    

// }
// int main(){
//     int x=10;
//     fun(x);
//     cout<<x;

//     return 0;
// }





// range base for loop


// #include<iostream>
// using namespace std;
// int main(){
//     int arry[]={1,2,3,4,5,6,7,8,9,10};
//     for(int &y:arry){  //if we not use '&', then no change is in arry 
//         y*=2;
//     }
//     for(int x:arry){
//         cout<<x<<" ";
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    string arry[]{"hello","world","how","are","you"};
    
    for(const string x:arry){
        cout<<x<<"\n" ;
    }
    return 0;
}