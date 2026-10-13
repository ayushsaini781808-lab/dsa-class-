 
//  given an integer array having n elements find the first locations of the minimum and maximum elements split the array into the three parts from these locations build another array by concatinating the second part followed by the first part followed by the third part print the element of these array in single line by  using inbuild functions 

// #include <bits/stdc++.h>
// using namespace std;

//  int main() {
//     int n;
//     cin>>n;
//    vector<int> a(n);

//     for (int i=0;i<n;i++) {
//         cin>>a[i];
//     }
//       int mn = min_element(a.begin(),a.end())-a.begin();
//     int mx = max_element(a.begin(),a.end())-a.begin();

//     if (mn>mx)
//         swap(mn,mx);

//     vector<int>ans;
    
//     for (int i=mn;i<=mx;i++) {
//         cout<<a[i]<<endl;
//     }
//     for (int i=0;i<mn;i++) {
//         cout<<a[i]<<endl;;
//     }
//     for (int i=mx+1;i<n;i++) {
//         cout<<a[i]<<endl;
//     }

//     return 0;
// }


//  given 2 array ( a and b ) having lenghths n and m respectively for each b[i] print the count of elements from a which is greater than b[i]  input first line has two space seprated integer denoting n and m . the second line has n seprate integer the third line has m space seprated integers output n space seprated integr in a single line 

//      int n,m;
//      cin>>n>>m;
//    vector<int> a(n), b(m);
//     for (int i= 0;i<n;i++) {
//         cin>>a[i];
//     }
//       for (int i=0;i<m;i++) {
//         cin>>b[i];
//     }
//         for (int i=0;i<m;i++) {
//         int count = 0;

//          for (int j=0;j<n;j++) {
//             if (a[j] > b[i]) {
//                 count++;
//             }
//         }
//        cout<<count<<endl;
//     }

//     return 0;
// }


// given an array having n integer and an interger k.find all parirs of elements from this array such that their sum is k(brute force version of  two sum problem).also discuss the complexity of your approch .input line of input contain the value of n and k .the second line contain n space seprated integers output space seprated elements of the pair each pair should go iin a seprated line

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n,k;
//     cin>>n>>k;
//     int a[n];
//     for (int i=0;i<n;i++) {
//         cin>>a[i];
//     }
//         for (int i=0;i<n;i++) {
//         for (int j=i+1;j<n;j++) {
//             if (a[i]+a[j]==k) {
//                 cout<<a[i]<<a[j]<<" "<<endl;
//             }
//         }
//     }

//     return 0;
// }


// given an array of n positive integers.for each element print the first greater element towards the right of the element .if no greater element is found print 0 , first line of input has n and the next line has n space seprated integers n space seprated in a single line 

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i=0;i<n;i++) {
//         cin>>a[i];
//     }
//         for (int i=0;i<n;i++) {
//             int flag=0;
//         for (int j=i+1;j<n;j++) {
//             if (a[j]>a[i]) {
//                 flag = a[j];
//                  break;
                
//             }
//         }
//         cout<<flag<<endl;
//     }

//     return 0;
// }


// given an array p holding n integers where p[i] represents the price of a particular stock on ith day.you are allowed to purchase and sell the stock only once find out your max profit .input first line contain the value of n.the next line has n space seprated integers and output a single integer is a single line representing the max profit 

//  #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int p[n];
//     for (int i=0;i<n;i++) {
//         cin>>p[i];
//     }
//     int maxprofit =0;
//     for (int i=0;i<n;i++) {
//         for (int j=i+1;j<n;j++) {
//             int profit= p[j]-p[i];
//             if(profit>maxprofit){
//                 maxprofit= profit;
//             }
//         }
//     }
//     cout<<maxprofit<<endl;

// return 0;
// }


// give an array with N elements .print the sum of the subarray having maximum sum (brute force version of kadane algorithm ).the elements of the array could be positive ,negative ,zero also discuss the complexity of approach input = first kline contain the value of n and the next line has n space seprated intteger output a single integer in a single line 

// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int maxsum = a[0];
//     for(int i=0;i<n;i++){
//        int sum =0;
//         for(int j=i;j<n;j++){
//             sum += a[j];
//             maxsum = max(maxsum,sum);
//         }
//     }
//     cout<<maxsum<<endl;

    

 
//  swap k elements  


// #include <bits/stdc++.h>
// using namespace std ;
// int main(){
//     int n,k;
//    //  cout<<"enter the n and k ";
//     cin>>n>>k;
//    vector<int>a(n);
//    // cout<<("enter the elemeents of array");
//    for(int i=0;i<n;i++){
//     cin>>a[i];

// }
//  for(int i=0;i<n;i+=2*k){ 
//    for(int j=i;j<i+k;j++){
//     swap(a[j],a[j+k]);
//    }
// }

//      for(int i=0;i<n;i++){
//         cout<<a[i]<<" "<< endl;
//      }
 
//    return 0;
//     }
