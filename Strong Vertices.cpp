#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;


    int a[n],b[n];

    for(int i = 0 ; i < n ; i++) cin>>a[i];

    vector<int> v;
    int ma = 0;
    for(int i = 0 ; i<n; i++){
        int x;
        cin>>x;

        b[i] = a[i]-x;

        if(i == 0) ma = b[i];

        //cout<<"b[i] = >"<<b[i]<<" "<<ma<<endl;

        if(ma<b[i]){
            ma = b[i];
            v.clear();
            v.push_back(i+1);
        }
        else if(ma == b[i]){
            v.push_back(i+1);
        }
    }

    cout<<v.size()<<endl;
    for(int i = 0 ; i < v.size(); i++) cout<<v[i]<<" ";

    cout<<endl;

}


int main(){

    int t;
    cin>>t;

    for(int i= 0 ; i<t; i++) solve();


}
