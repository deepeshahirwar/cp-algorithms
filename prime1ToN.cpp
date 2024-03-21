
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std; 
// for count prime number  1 to n 
int prime(int n){
 vector<bool>is_prime(n+1, true); 
is_prime[0] = is_prime[1] = false; 
 
 for(int i=2; i*i<=n; i++){
    if(is_prime[i]){
        for(int j=i*i; j<=n; j+= i)
           is_prime[j]=false;
    }
 } 

 int noOfPrimes =0; 
 for(int i=0; i<n+1; i++){
    if(is_prime[i])noOfPrimes++;
 } 

 return noOfPrimes;
}
int main()
{
    fastread(); 
    int n; cin>>n; 
   cout<< prime(n)<<endl;
     
    return 0;
}
