#include <iostream>

using namespace std;
void checkmax(int *arry, int n)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = i + 1; j < n; j++)
        {
            if (arry[j] > arry[i])
            {
                cout << arry[j] << " ";
                break;
            }
            
        }
        if(j==i){
            cout<<"-1"<<endl;
        }
    }
}
int main()
{
    int arry[]{5, 15, 10, 8, 6, 12, 9, 18}, n = 8;
    // int arry[]{25,20,15,10},n=4;
    checkmax(arry, n);

    return 0;
}