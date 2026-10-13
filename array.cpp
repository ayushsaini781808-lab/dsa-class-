// #include <bits/stdc++.h>
// using namespace std;
//  int main() {
// 
//     int n;
//     cin >> n;

//     int a[n];
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     cout << a[0] + a[1] << endl;
//     cout << a[n-2] + a[n-1] << endl;

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};

//     int sum1 = accumulate(arr, arr + 5, 0);
//     int sum2 = accumulate(arr, arr + 5, 10);

//      cout<<sum1<<endl; 
//      cout<<sum2<<endl; 

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int p[n];
    for (int i=0;i<n;i++) {
        cin>>p[i];
    }
    int maxprofit =0;
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            int profit= p[j]-p[i];
            if(profit>maxprofit){
                maxprofit= profit;
            }
        }
    }
    cout<<maxprofit<<endl;

return 0;
}
