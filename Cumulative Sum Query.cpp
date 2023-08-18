#include<bits/stdc++.h>
using namespace std;


void solve(){

    int n;
    cin>>n;

    int a[n],b[n+1] = {0};

    for(int i = 0; i<n ; i++){
        cin>>a[i];
        b[i+1]= b[i]+a[i];
        //cout<<"b "<<b[i+1];
    }

    int q;
    cin>>q;

    while(q--){
        int p,q;
        cin>>p>>q;

        if(p != 0)cout<<b[q+1]-b[p]<<endl;
        else cout<<b[q+1]<<endl;
    }


}



int main(){
    int t = 1;
    //cin>>t;

    for(int i = 0; i < t; i++) solve();

}
