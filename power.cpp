 #include<bits/stdc++.h>
 using namespace std; 

 long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
    long long int power(int a, long long int b) { 
       long long m = 1e9 + 7; 
       return binpow(a,b,m);
    } 
 
 int main(){
    long long a,b; 
    cin>>a>>b; 
    cout<<power(a,b);
 }