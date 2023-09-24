// #include <iostream>
// using namespace std;
// void selection1(int *arry, int n)
// {

//     for (int i = 0; i < n - 1; i++)
//     {
//         int min_idx = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arry[min_idx] > arry[j])
//             {
//                 min_idx = j;
//             }
//         }
//         swap(arry[min_idx], arry[i]);
//     }
// }
// int main()
// {
//     int arry[]{5, 7, 6, 2, 8, 10, 4};
//     int n = 7;
//     selection1(arry, n);
//     for (auto x : arry)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void insertionsort(int *arry, int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int idx = i - 1;
//         int temp = arry[i];
//         while (idx >= 0 && temp < arry[idx])
//         {
//             arry[idx + 1] = arry[idx];
//             idx--;
//         }
//         arry[idx+1]=temp;
//     }
// }
// int main()
// {
//     int arry[]{5, 7, 6, 2, 8, 10, 4};
//     int n = 7;
//     insertionsort(arry, n);
//     for (auto x : arry)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int count=0;
    int arry[]{1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(arry[i]%2==0){
        count++;
    }
    }
    cout<<count;
    return 0;
}