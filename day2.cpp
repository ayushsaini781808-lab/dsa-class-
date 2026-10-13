//   sort inbuild 

// sort(arr_name ,arr_name + length,less<int>())  ascending 
// sort(arr_name ,arr_name + length,greater<int>()) descending

#include <bits/stdc++.h>
using namespace std;

 int main() {
//     int n;
//    cin>>n;
//      int a[n];
//    for (int i=0; i<n;i++) {
//         cin>>a[i];
//     }
//     sort(a,a+n,greater<int>());
//     int sum=0;
//     for (int i=0;i<5;i++) {
//         sum += a[i];
//     }
//     cout<<sum<<endl;
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<endl;
//     }
//     return 0;
// }


// vector 

// give an array of n integer and a positive integer k. swap every kth element with the next k element n is multiple of 2k use 2 nested loop

//     int n,k;
//     cin>>n>>k;
//      int a[n];
//    for (int i=0;i<n;i++) {
//         cin>>a[i];
//     }

//     for (int i=0;i<n;i+=2*k) {
//       for (int j=0;j<k;j++) {
//         swap(a[i+j],a[i+j+k]);
//         }
//     }
//      for (int i=0;i<n;i++) {
//         cout<<a[i]<<endl;
//     }

//     return 0;
// }


//  give an integer array having n elements .find the no of occurances of 1 ,and remove the element at the index ,which is equal to the no of occurance of 1 print the modified array .give that count of 1 <n 

//      int n;
//      cin>>n;
//     vector<int> a(n);
//     for (int i=0;i<n;i++) {
//         cin>>a[i];
//     }
//    int count1 = count(a.begin(), a.end(), 1);
//     }
//       a.erase(a.begin()+count);
//         for (int i=0;i<a.size();i++) {
//         cout<<a[i]<<endl;
//     }

//     return 0;
//  }