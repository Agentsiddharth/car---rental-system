#include<iostream>
using namespace std;
int main(){
    
    int A[3][2] = {{4, 8},
                   {0, 2},
                   {1, 6}};
    
    int B[2][2] = {{5, 2},
                   {9, 4}};

    int arry[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<int(A[i])*int(B[i])+int(A[j])*int(B[j])<<endl;
        }
        cout<<endl;
        
    }
    


    return 0;
}