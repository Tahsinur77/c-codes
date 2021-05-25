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

    ll a[n+2];
    ll sum = 0;
    map<ll,ll> mp;
    for(int i = 0 ; i < n+2 ; i++){
        cin>>a[i];
        sum += a[i];
        mp[a[i]]++;
    }

    sort(a,a+n+2);

    sum -= (a[n+1]+a[n]);
    //cout<<sum<<endl;
    if(sum == a[n] || sum == a[n+1]){
        for(int i = 0 ; i < n; i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    else{
        sum+=a[n];
        ll p = sum-a[n+1];
        //cout<<p<<endl;
        if (mp[p] >0 && p>=0 && p != a[n+1] && p!= a[n]){
            int ok = 0;
            for(int i = 0 ; i < n; i++){
                if(ok == 0 && p == a[i]){
                    ok = 1;
                }
                else cout<<a[i]<<" ";
            }
            cout<<a[n];
            cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }

}
}

