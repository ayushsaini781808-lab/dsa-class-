// // sum of digits 
// #include <iostream>
// using namespace std;
// int main(){
// int n ;
// cout<<"enter the number";
// cin>>n;
// int sum = 0;
// while(n>0){
//     int dig = n%10;
//     sum = sum+dig;
//    n=n/10;}
//    cout<<sum<<endl;
//    return 0;
    
// }
 

//  sum of digit is prime 

#include <bits/stdc++.h>
using namespace std;
int main(){
// int n ;
// cout<<"enter the number";
// cin>>n;
// int sum = 0;
// while(n>0){
//      int dig = n%10;
//     sum = sum+dig;
//    n=n/10;
// }
//       int flag = 0;
//     for (int i= 2;i<sum;i++) {
//         if (sum%i==0) {
//             flag =1;
//             break;
//         }
//     }
//      if (sum<2) flag = 1;

//     cout << (flag ? "NO":"YES");

//     return 0;
// }


// question 1 valid phone no 

// int n ,x;
// cin>>n>>x;
// int total = n*x;
// if( total >=10000 && total <= 99999){
//     cout<<"yes"<<endl;
// }
// else 
// {
// cout<<"no"<<endl;
//     return 0;
// }
// }


//  for counting character in string

// count(s.begin(),s.end(),'a');

// string validation 

//  #include <iostream>
// using namespace std;

// int main() {
    string s;
    cin >> s;

    int c = 0;

    for(char x : s) {
        if(x == '&' || x == '#')
            c++;
    }

    cout << (c % 2 == 0 ? "YES" : "NO");

    return 0;
}