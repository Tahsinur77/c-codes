#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){

    ll n,h;
    cin>>n>>h;

    vector<ll> v(n);

    for(auto &x : v) cin>>x;

    ll suru = 0 , ses = 1e18;

    while(suru<=ses){
        ll mid = suru + (ses-suru)/2;

        ll sum = mid;

        for(int i = 0; i < n-1; i++){
            sum+=min(mid,v[i+1]-v[i]);
        }

        if(sum<h) suru = mid+1;
        else ses = mid-1;
    }


    cout<<suru + (ses-suru)/2<<"\n";

}



int main(){
    int t;
    cin>>t;


    for(int i = 0 ; i<t; i++) solve();

}
