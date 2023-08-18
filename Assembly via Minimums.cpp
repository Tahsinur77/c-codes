#include<bits/stdc++.h>
using namespace std;


void solve(){

    int n;
    cin>>n;

    int x = n * (n-1) /2;

    int a[x];

    for(int i = 0 ; i <x ;i++) cin>>a[i];

    sort(a,a+x);

    int p = 0;

    for(int i = 1; i<n;i++){
        p += n-i;
        //cout<<p<<endl;
        cout<<a[p-1]<<" ";
    }
    cout<<a[x-1]<<endl;

    //cout<<endl;


}


int main(){
    int t =1;
    cin>>t;

    for(int i = 0 ; i < t; i++) solve();

}
