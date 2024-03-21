#include<bits/stdc++.h>
using namespace std; 
 
void solve(){
// 4. multiply or divide number by 2^k 
// multiply : (x<<k) left shift 
// divide : (x>>k) right shift 

// x multiply  by 2^k 
// int x = 10;  
// int k =2;
//  x = (x<<k); // 40 
//  cout<<x<<endl;  

// x divide by 2^k 
// int x = 16;  
// int k =2;
//  x = (x>>k); // 16/4 == 4
//  cout<<x<<endl;   

// 5. find out x%2^k 
// int x = 10; 
// int  k = 2; 
 
//  x = x&((1<<k)-1); // 10%2^2 == 2
//  cout<<x<<endl;// 2 


// 6. swapping 2 numbers x and y without a temparary variable 
// int x = 2; 
// int y = 4; 

// x = x^y; 
// y = x^y; 
// x = x^y; 

// cout<<x<<" "<<y<<endl;// x = 5 and y = 2

}
int main(){
 solve();
return 0;
}