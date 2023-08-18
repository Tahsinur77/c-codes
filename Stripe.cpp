#include<bits/stdc++.h>
using namespace std;


void solve(){

    int n;
    cin>>n;

    vector<int> v(n);

    for(auto &x : v) cin>>x;

    int a[n] = {0};

    a[n-1] = v[n-1];

    for(int i = n-2 ; i >= 0 ;i--){
        a[i] = a[i+1] + v[i];
    }
    //for(auto &x:a) cout<<x<<" ";

    //cout<<endl;

    int ans = 0;

    int b[n] = {0};
    b[0] = v[0];
    if(b[0] == a[1]) ans++;
    //cout<<b[0]<<" "<<a[1]<<endl;
    for(int i = 1; i<n-1;i++){
        b[i] = b[i-1] + v[i];
        //cout<<b[i]<<" "<<a[i+1]<<endl;
        if(b[i] == a[i+1]) ans++;

    }

    cout<<ans<<endl;


}

int main(){

    int t = 1;
    //cin>>t;


    while(t--){
        solve();
    }

}
