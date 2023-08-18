#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    ll m,k,a,b;

    cin>>m>>k>>a>>b;
    ll c = m/k;
    ll n = m - (min(c,b)*k);
    n -= a;
    //cout<<n<<endl;
    if(n<=0) cout<<"0"<<endl;
    else{
        ll x = n/k;
        ll y = n%k;

        ll ans = x+y;

        if(a >= k-y) ans = min(ans,x+1);

        cout<<ans<<endl;

    }
}

int main(){
    int t = 1;
    cin>>t;

    while(t--) solve();

}
