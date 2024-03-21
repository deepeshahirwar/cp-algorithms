 // Bit manuplation tricks
 #include<bits/stdc++.h>
using namespace std; 
 
void solve(){ 
 //1. check if number is even of odd  
//  int x = 4; 
//  if(x&1)
//     cout<<"odd"; 
//  else 
//  cout<<"even"; 
 

 // 2. check if  a number is a power of  2 or 2^k  
 //int x = 4; 
  
//   if(x && !(x&(x-1)))
//   cout<<"x is power if 2"; 
//   else 
//   cout<<"x is not power of 2"; 


/*3.  playing with kth bit */  
//a. check kth bit is set or unset
// int x = 5; // bin = 101
// int  k = 0; // set
// if (x & (1<<k))
//     cout << "SET";
//     else
//      cout << "NOT SET"; 

 
 // b.toggle the kth bit   => 0 to 1 , 1 to 0 
//  int x = 5;  // 101
//  int k = 1;  // kth bit  is 0 to 1 
//  // x  = 111 = 7
//  x = x^(1<<k); 

// cout<<x<<endl;// 7 

 
// c. set the kth bit  
//  int x = 4; // 100 
//  int k = 0; 
  
//   x = x|(1<<k); // 101 = 5 
//   cout<<x<<endl;// 5 


// d. unset the kth bit 

int x = 7; // 111
 int k = 1;  // 101 = 5
  
  x = x&(~(1<<k)); // 101 = 5 
  cout<<x<<endl;// 5 

}
int main(){
 solve(); 

return 0;
}