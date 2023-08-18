#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;

    string a = "",b = "";

    for(int i = 0; i<s.size()*2; i++){
        if(i%2 == 0) a+= '(';
        else a+=')';

        if(i<s.size()) b+='(';
        else b+=')';
    }

    //cout<<a<<" "<<b<<endl;

    size_t found = a.find(s);
    if (found == string::npos){
        cout<<"YES"<<endl;
        cout<<a<<endl;
    }
    else{
        size_t found1 = b.find(s);
        if (found1 == string::npos){
            cout<<"YES"<<endl;
            cout<<b<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


}


int main(){
    int t = 1;
    cin>>t;

    while(t--) solve();
}
