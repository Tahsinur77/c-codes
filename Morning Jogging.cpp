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
IOS;
int t;
cin>>t;

while(t--){
    int n,m;
    cin>>n>>m;

    ll a[m];
    vector<pair<ll,ll>> v;
    ll b[m] = {0};
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <m; j++){
            cin>>a[j];
        }
        sort(a,a+m);
        if(i == 0){
            for(int j = 0 ; j <m; j++){
                v.pb(make_pair(a[j],j));
            }
        }
        else{
            sort(all(v));
            int l = 0;
            for(int k = v.size()-1; k>=0;k--) {
                b[v[k].se] = a[l];
                if(v[k].fi>a[l]) v[k].fi = a[l];
                //cout<<v[k].fi<<" "<<v[k].se<<" "<<a[l]<<"ok"<<endl;
                l++;
            }
        }

        for(int e = 0 ; e<m;e++) {
            if(i==0) cout<<a[e]<<" ";
            else cout<<b[e]<<" ";
        }
        cout<<endl;
    }


}
}

