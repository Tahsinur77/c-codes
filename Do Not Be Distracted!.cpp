#include<bits/stdc++.h>
using namespace std;


#define pb   push_back
#define fi   first
#define se   second
#define mk   make_pair
#define all(x)    x.begin(),x.end()
#define For(i, j, k) for(int i = j; i < k; i++)
#define Rof(i, j, k) for(int i = j; i > k; i--)


#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))

typedef long long int ll;
typedef unsigned long long int ull;
const double pi = 2.0*acos(0.0);

#define IOS ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)

char small[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'} ;

ll big_mod(ll BASE, ll POWER, ll MOD){

    if(POWER == 0) return 1;
    else if(POWER %2 ==0){
        ll RESULT = big_mod(BASE,POWER/2,MOD);
        return ((RESULT % MOD)*(RESULT % MOD))% MOD;
    }
    else return ((BASE % MOD)*(big_mod(BASE,POWER-1,MOD)% MOD))% MOD;

}

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;

    string s;
    cin>>s;
    int a[26] = {0};
    int p;
    int check = 0;
    for(int i = 0 ; i < n-1 ; ){
        if(s[i] == s[i+1]){
        while(s[i] == s[i+1] && i<n-1){
           p = int(s[i]-65) ;
           i++;
        }
        i++;
        }
        else {
            p = int(s[i]-65) ;
            i++;
        }
        //cout<<p<<" "<<i<<endl;
        a[p]++;
        if(a[p]> 1){
            check = 1;
        }
    }
    if(s[n-1] != s[n-2]){
        p = int(s[n-1]-65);
        //cout<<p<<endl;
        a[p]++;
        if(a[p]>1) check = 1;
    }
    if(check == 1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}
}
