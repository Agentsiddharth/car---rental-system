#include<iostream>
using namespace std;
int matrix(int x,int y){
    int count=1;
    int arry[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            arry[i][j]=count;
        }   count++;     
        
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout<<arry[i][j]<<" ";
        }
        cout<<endl;
        
        
    }
    

}
int main(){
    int x,y;
    cout<<"enter number of element:"<<endl;
    cin>>x>>y;
    matrix(x,y);
    
    return 0;
}