// declaration vector<vector<int>int>> mat;
// declaration vector<vector<int>int>> mat(N,vector<int>(M))

// insertion  mat=[row][col].begin() + ,index

//  row wise sum , max , min 

// #include <bits/stdc++.h>
// using namespace std ;
// int main(){
// int n,m;
// cin>>n>>m;
// vector<vector<int>> mat(n,vector<int>(m));
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>mat[i][j];

//     }
// }
// for(int i=0;i<n;i++){
//     int sum = accumulate(mat[i].begin(),mat[i].end(),0);
//     int  max = *max_element(mat[i].begin(),mat[i].end());
//     int  min = *min_element(mat[i].begin(),mat[i].end());

//     cout<<sum<<" "<<max<<" "<<min<<" "<<endl;
// }

// return 0;

// }


// #include <bits/stdc++.h>
// using namespace std ;
// int main(){
// int n,m;
// cin>>n>>m;
// vector<vector<int>> mat(n,vector<int>(m));

// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>mat[i][j];
//     }
// }
//   mat[1].insert(mat[1].begin()+2,100);

//    for(int i=1;i<n-2;i++){
//     for(int j=0;j<mat[i].size();j++){
//         cout<<mat[i][j]<<" ";
//     }
//     cout<<endl;
     
// }

// return 0;
// }


// for each loop 

// int n,m;
// cin>>n>>m;
// vector<vector<int>> mat(n, vector<int>(m));
// for (auto &row : mat) {
//     for (auto &element : row) {
//         cin >> element;
//     }
// }
// for (auto &row : mat) {
//     for (auto &element : row) {
//         cout << element << " ";
//     }
//     cout << endl;
// }


// 23 row wise sum,maxand min

// int n,m;
// cin>>n>>m;
// vector<vector<int>> mat(n,vector<int>(m));

// for(int i=0;i<n;i++){
//    for(int j=0;j<m;j++){
//     cin>>mat[i][j];
//    } 
// }
//  for (auto &row : mat) {
//         int sum = 0;
//         int maximum = row[0];
//         int minimum = row[0];

//         for (auto &element : row) {
//             sum += element;
//             maximum = max(maximum,element);
//             minimum = min(minimum,element);
//         }
//         cout<<sum<<" "<<maximum<<" "<<minimum<<endl;
//     }
//     return 0;
// }



// sub matrix given a matrix with n rows and m cols (n,m>=6) print a submatrix obtained from mat after removing the first row ,first cols , last two row and last two cols use nested loop

//  int n,m;
// cin>>n>>m;
// vector<vector<int>> mat(n,vector<int>(m));

// for(int i=0;i<n;i++){
//    for(int j=0;j<m;j++){
//     cin>>mat[i][j];
//    } 
// }
   
//  for (int i=1;i<= n-3;i++) {
//         for (int j=1;j<=m-3;j++) {
//             cout<<mat[i][j]<<" ";
        
//     }
//         cout << endl;
// }

//     return 0;
// }
         

// swap 


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n,m,k;
//     cin>>n>>m>>k;
//   vector<vector<int>> mat(n,vector<int>(m));

//    for (int i=0;i<n;i++) {
//         for (int j=0;j<m;j++) {
//             cin>>mat[i][j];
//         }
//     }
//     for (int i=0;i<n/2;i++) {
//         for (int j=0;j<k;j++) {
//        swap(mat[i][j], mat[m-k+j][n-1-i]);
           
//         }
//     }
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<m;j++) {
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// swap matrix element 

#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int a[50][50];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}