#include<bits/stdc++.h>
using namespace std; 
 
void solve(){
   // 7. bit property : no. of set bits in  a = x 
                    // no. of set bits in b = y 
                //so, no. of set bits in (a^b) = z 

    // then , if x+y is even then z is even 
     //      if  x+y is odd then z is odd 
      
      // eg. 

    //   int a = 5, b = 3; // 101 , 011 
    //   int  x = __builtin_popcount(a);
    //   int  y = __builtin_popcount(b); 

    //   int z = a^b; 
       
    //    if((x+y)%2 == 0){
    //     cout<<z<<"  z is also even"<<endl;
    //    }else{
    //     cout<<z<<" z is also odd"<<endl;
    //    } 


   //  8.  
//    if( x == a)
//     x = b; 
//     if(x == b)
//      x = a;   
// same task do using xor  
// int a = 2, b = 4,  x = 4;
//  x = a^b^x;
// cout<<x<<endl;// x = 2  

 
 // 9. adding using bit ops a+b  
 // a+b = (a^b) + 2*(a&b) 
 // a+b =   (a|b) + (a&b); 

//  int a = 4, b = 2; 
//  int add1 = (a^b) + 2*(a&b);  
//  int  add2 = (a|b) + (a&b); 
//  cout<< add1 <<" "<< add2 << endl;// 6 

 
 // 10. finding no. of set bits in number n 
// i. __builtin_popcout(n), x is integer
// ii. __builtin_popcoutll(n), x is long long 

int n = 5;// 101 
int setBitsOfn = __builtin_popcount(n); 
cout<<"no. of set bits in n is : "<<setBitsOfn<<endl;// 2 
cout<<"no. of unset bits in n is : "<<(32 - setBitsOfn)<<endl;
}
int main(){
 solve();
return 0;
}