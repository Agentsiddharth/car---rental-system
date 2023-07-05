#include <iostream>
using namespace std;
int check_input(string pattern)
{
    int n = pattern.length();
    for (int i = 0; i < n; i++)
    {
        if (pattern[i] == pattern[i + 1])
        {
            return 1;
        }
        else if (pattern[i + 1] == pattern[i + 2])
        {
            return 2;
        }
        else
        {
            return 3;
        }
    }
}


void check_input2(string arry[],int n)
{
    
    
    for (int i = 0; i < n; i++)
    {
        int type=check_input(arry[i]);
        if (type==1){
            cout<<arry[i];
        }
        
        
    }
}

void give(string arry[],string patt){

}

int main()
{
    int n;
    cout<<"enter number of elements in arry:-";
    cin>>n;
    string dict[n];
    string pattern;
    cout<<"enter arry element in arry(only string values allowed):-";
    for (int i = 0; i < n; i++)
    {
        cin>>dict[i];
    }
    cout<<"enter patter(only 3 letter allowed):-";
    cin>>pattern;
    
    
    
    

    return 0;
}