#include<bits/stdc++.h>
using namespace std;

bool checking(vector<int>& v, int mid,int cow){
    int lst = v[0];
    cow--;
    for(int i = 1; i <v.size(); i++){
        if(v[i]-lst>=mid){
            cow--;
            lst = v[i];
        }

        if(cow<=0) break;
    }
    //cout<<"goru =>"<<cow<<endl;
    if(cow<=0) return true;
    else return false;

}

void solve(){
    int n,m;
    cin>>n>>m;

    vector<int> v(n);

    for(auto &x:v) cin>>x;

    sort(v.begin(),v.end());

    int l = v[0], h = v[n-1]-v[0];
    int ans = 0;
    while(l<=h){
        int mid = l + (h-l)/2;
        //cout<<l<<" "<<h<<" "<<mid<<endl;
        if(checking(v,mid,m)){
            //cout<<"l =>"<<l<<endl;
            l = mid+1;
            ans = max(ans,mid);
        }
        else{
            h = mid-1;
        }

    }

    cout<<ans<<endl;

}


int main(){
    int t = 1;
    cin>>t;


    for(int i = 0 ; i < t ;i++) solve();

}
