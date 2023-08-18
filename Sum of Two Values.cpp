#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n,x;
    cin>>n>>x;

    map<int,int> m,pos;

    vector<int> v(n);

    for(int i = 0 ; i< n; i++) {
        cin>>v[i];
        m[v[i]]++;
        pos[v[i]] = i+1;
    }
    int ans = -1;
    for(int i = 0 ; i< n; i++) {
        if(m[x-v[i]]>0){
            if(x-v[i] != v[i] || m[x-v[i]]>1 || (x-v[i] == v[i] && pos[x-v[i]] != i+1)){
                cout<<i+1<<" "<<pos[x-v[i]]<<endl;
                ans = 0;
                break;
            }
        }
    }

    if(ans == -1) cout<<"IMPOSSIBLE"<<endl;

}


int main(){
    int t =1 ;
    //cin>>t;
    while(t--) solve();
}
