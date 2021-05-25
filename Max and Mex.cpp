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

while(t--){

    ll n,k;
    cin>>n>>k;

    ll a[n];

    ll ma = -1;
    set<ll> s;
    map<ll,ll> m;
    for(int i = 0 ; i < n ;i++){
        cin>>a[i];
        s.insert(a[i]);
        m[a[i]]++;
        ma = max(ma,a[i]);
    }

    sort(a,a+n);

    ll p = ma+1;

    for(int i = 0 ; i < n ;i++){
        if(a[i] != i){
            p = i;
            break;
        }
    }
    //cout<<p<<endl;
    if(p<ma){
        ll c = (ma+p)/2;

        if(c*2 != ma+p) c++;
        //cout<<c<< " "<<m[c]<<endl;
        ll  ans = s.size();
        if(m[c] == 0 && k != 0) ans++;
        cout<<ans<<endl;

    }
    else{
       ll ans = s.size()+k;
       cout<<ans<<endl;
    }


}
}

