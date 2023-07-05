#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arry1[]{1,2,3,4,5,6,7,10};
    int arry2[]{1,2,3,4,5,6,7,8};
    if (is_permutation(arry1,arry1+5,arry2))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}