
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;  
bool  almost_primes(int num , vector<int>allprimes){  
    int  cnt=0;  
 
 for(int i=0; i<allprimes.size(); i++){
    if(num%allprimes[i] == 0)cnt++;
 } 
return cnt == 2;         
}
void prime(int n){
 vector<bool>is_prime(n+1, true); 
is_prime[0] = is_prime[1] = false; 
 
 for(int i=2; i*i<=n; i++){
    if(is_prime[i]){
        for(int j=i*i; j<=n; j+= i)
           is_prime[j]=false;
    }
 } 

 vector<int>allprimes; 
 for(int i=0; i<n+1; i++){
    if(is_prime[i])allprimes.pb(i);
 }  

 
  int ans =0;
    for(int i=1; i<=n; i++){ 
        if(almost_primes(i,allprimes))ans++;
    }
 
 cout<<ans<<endl;
}
int main()
{
    fastread(); 
    int n; cin>>n; 
    prime(n);
     
    return 0;
}
