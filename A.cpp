#include<bits/stdc++.h>
using namespace std;


#define pb   push_back
#define fi   first
#define se   second
#define all(x)    x.begin(),x.end()


#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))

typedef long long int ll;
typedef unsigned long long int ull;
const double pi = 2.0*acos(0.0);

#define IOS ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)




int main(){


    string s;
    cin>>s;

    int n;
    cin>>n;

    char o = s[s.size()-1];
    vector<string> v;
    map<char,int> y;
    int ok = 0 ;

    for(int i = 0 ; i < n ; i++){
        string a;
        cin>>a;
        char c = a[a.size()-1];
        if(s[s.size()-1] == a[0]){
            v.pb(a);
            ok++;
        }

        y[a[0]]++;
    }


    if(ok == 0) cout<<"?"<<endl;
    else{
        int l = v.size(),che = 0;
        string ss ;
        for(int i = 0 ; i < l ; i++){
            string q = v[i];
            char ch = q[q.size()-1];

            if(o==ch && l==1){
                ss=v[i];
                che=1;
                break;
            }
            if(y[ch]==0){
                ss=v[i];
                che=1;
                break;
            }
        }

        if(che == 1) cout<<ss<<"!"<<endl;
        else cout<<v[0]<<endl;
    }
}



