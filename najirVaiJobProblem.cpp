#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,khuji;
    cin>>n>>khuji;

    vector<int> v(n);

    for(auto &x : v) cin>>x;

    int l = 0, r = n-1;
    int ans = -1;
    while(l<=r){
        int mid = l + (r-l)/2;

        if(v[mid] == khuji){
            ans = mid;
            break;
        }
        else if(v[mid]> khuji) r = mid-1;
        else l = mid+1;

    }

    if(ans != -1) cout<<"Find, position = "<<ans<<endl;
    else{
        //cout<<l<<" "<<r<<endl;
        cout<<"Not Find, It should be in index = "<<l+1<<endl;
    }

}


int main(){

    int t = 1;
    //cin>>t;
    while(t--) solve();

}
