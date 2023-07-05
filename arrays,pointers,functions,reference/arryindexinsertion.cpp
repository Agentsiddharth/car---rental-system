#include <iostream>
using namespace std;
int insert(int arry[], int n, int index, int target)
{
    if (index > 100)
    {
        return -1;
    }
    else
    {
        for (int i = n - 1; i <= index; i--)
        {
            arry[i + 1] = arry[i];
            arry[index] = target;
        }
        
    }
    return 1;
    
    
    
}
int main()
{
    int n,index,target;
    cin >> n>>index>>target;
    int arry[100];
    cout << "enter arry elements:-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arry[i];
    }
    
    cout<<"after insertion"<<endl;
    insert(arry,n,index,target);
    for (int i = 0; i < n+1; i++)
    {
        cout<<arry[i]<<" ";
    }
    

    return 0;
}