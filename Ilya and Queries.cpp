#include<bits/stdc++.h>
using namespace std;


void solve(){
    string s;
    cin>>s;

    int n = s.size();
    int c_sum[n] = {0};

    for(int i = 0 ; i<n-1; i++){
        if(s[i] == s[i+1]) c_sum[i+1] = c_sum[i]+1;
        else c_sum[i+1] = c_sum[i];
    }

    int m;
    cin>>m;


    while(m--){
        int a,b;
        cin>>a>>b;


        int ans = c_sum[b-1]-c_sum[a-1];
        cout<<ans<<endl;
    }

}

int main(){

    int t  = 1;
    //cin>>t;


    for(int i = 0 ; i < t; i++) solve();

}

