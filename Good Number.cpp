/*Author
   SaJiB */

#include<bits/stdc++.h>
using namespace std;


#define pb   push_back
#define fi   first
#define se   second
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

int gcd(int a, int b)
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
for(int i = 1; i <= t; i++){

    ll n,k;
    cin>>n>>k;


    if(k==1) cout<<"Case #"<<i<<": "<<n<<endl;
    else{
        ll x = pow(k,2)-1;
        ll ans = x;
        int p = k+1;
        ll check = 2;
        ll c = 0;
        while(x<=n){
            ll y = pow(p,2);
            y--;
            c = y-x;
            if(y>n) break;
            ans += (c/check)+1;
            check++;
            p++;
            x = y;
        }
        c = n - x;
        ans += (c/check)+1;
        cout<<"Case #"<<i<<": "<<ans<<endl;
    }
}

}

