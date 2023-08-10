// #include <iostream>
// #include <algorithm>
// using namespace std;
// void sort1(int *arry1, int n, int *arry2, int m)
// {
//     int arry3[m + n];
//     for (int i = 0; i < n; i++)
//     {
//         arry3[i] = arry1[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         arry3[i + n] = arry2[i];

//     }
//     sort(arry3, arry3 + n);
//     for (auto x : arry3)
//     {
//         cout << x << " ";
//     }
// }
// int main()
// {
//     int arry1[3]{5, 2, 8}, arry2[3]{9, 6, 7};
//     int n = 3, m = 3;
//     sort1(arry1, n, arry2, m);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int binarysearch1(int *arry, int n, int target)
// {
//     int low = 0, high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arry[mid] == target)
//         {
//             return mid;
//         }
//         else if (target < arry[mid])
//         {
//             high = mid - 1;
//         }
//         else if (target > arry[mid])
//         {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arry[]{1, 3, 5, 7, 9, 11, 13, 15};
//     int n = 8, k = 9;
//     cout << binarysearch1(arry, n, k);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void selectionsort(int *arry, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int min_idx = i;
//         for (int j = i+1; j < n; j++)
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
//     int arry[]{1, 3, 5, 7, 9, 11, 13, 15};
//     int n = 8, k = 9;
//     selectionsort(arry, n);
//     for (auto x : arry)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// void mergesort1(int *arry1, int n, int *arry2, int m, int *arry3, int z)
// {
//     int n1 = 0, m1 = 0, z1 = 0;
//     while (n1 < n && m1 < m)
//     {
//         if (arry1[n1] <= arry2[m1])
//         {
//             arry3[z1] = arry1[n1];
//             n1++;
//         }
//         else
//         {
//             arry3[z1] = arry2[m1];
//             m1++;
//         }
//         z1++;
//     }
//     while (n1 < n)
//     {
//         arry3[z1] = arry1[n1];
//         n1++;
//         z1++;
//     }
//     while (m1 < m)
//     {
//         arry3[z1] = arry2[m1];
//         m1++;
//         z1++;
//     }
// }
// int main()
// {
//     int arry1[]{1, 3, 5, 7, 9}, arry2[]{2, 4, 6, 8, 10};
//     int n = 5, m = 5;
//     int z = m + n;
//     int arry3[z];
//     mergesort1(arry1, n, arry2, m, arry3, z);
//     for (auto x : arry3)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }