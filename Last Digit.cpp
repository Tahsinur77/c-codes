#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
int t;
cin>>t;
while(t--){
    int a;
    ll b;
    cin>>a>>b;
    if(a==0) cout<<"0"<<endl;
    else if(b==0) cout<<"1"<<endl;
    else{
        vector<int> v;
        vector<int>::iterator it;
        int p =a%10;
        int x = 1;
        while(true){
            x *=a;
            x%=10;
            if(v.size() !=0 )it = find(v.begin(),v.end(),x);
            if(it!=v.end()) break;
            v.push_back(x);
        }
        ll y = b%v.size();
        if(y==0) cout<<v[v.size()-1]<<endl;
        else cout<<v[y-1]<<endl;
    }
}
}
