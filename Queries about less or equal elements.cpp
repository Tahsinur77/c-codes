#include<bits/stdc++.h>
using namespace std;


void solve(){

    int n,m;
    cin>>n>>m;


    vector<int> a(n),b(m);

    for(auto &x: a) cin>>x;
    for(auto &x: b) cin>>x;

    sort(a.begin(),a.end());


    for(auto &x: b){
        int l = 0 , r = n-1;
        int ans = -1;
        while(l<=r){
            int mid = l +(r-l)/2;

            if(a[mid] == x){
                ans = mid;
                l = mid+1;
            }
            else if(a[mid]>x) r = mid-1;
            else l = mid+1;
        }

        cout<<l +(r-l)/2<<" ";
    }
    cout<<"\n";



}

int main(){
    int t = 1;
    //cin>>t;


    for(int i = 0 ; i < t; i++) solve();

}
