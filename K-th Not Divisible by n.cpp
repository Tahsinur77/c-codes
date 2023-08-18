#include<bits/stdc++.h>
using namespace std;


void solve(){

    int n,k;
    cin>>n>>k;


    int extra =(k-1)/(n-1);

    cout<<k+extra<<endl;

}

int main(){
    int t;
    cin>>t;


    for(int i = 0 ;i <t;i++) solve();

}
