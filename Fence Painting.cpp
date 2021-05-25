/*Author
   SaJiB */

#include<bits/stdc++.h>
using namespace std;


#define pb   push_back
#define fi   first
#define se   second
#define all(x)    x.begin(),x.end()
#define For(i, j, k) for(int i = j; i < k; i++)
#define Rof(i, j, k) for(int i = j; i > k; i--)


#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))

typedef long long int ll;
typedef unsigned long long int ull;
const double pi = 2.0*acos(0.0);

#define IOS ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)

char small[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'} ;

ll big_mod(ll BASE, ll POWER, ll MOD){

    if(POWER == 0) return 1;
    else if(POWER %2 ==0){
        ll RESULT = big_mod(BASE,POWER/2,MOD);
        return ((RESULT % MOD)*(RESULT % MOD))% MOD;
    }
    else return ((BASE % MOD)*(big_mod(BASE,POWER-1,MOD)% MOD))% MOD;

}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main(){

int t;
cin>>t;

while(t--){
    int n,m;
    cin>>n>>m;
    int a[n],b[n],d[n]={0};
    vector<int> x,v;
    for(int i = 0 ;i<n;i++){
        cin>>a[i];
        v.pb(a[i]);
    }
    set<int> s;
    int cou = 0 ;
    for(int i = 0 ; i<n;i++){
        cin>>b[i];
        x.pb(b[i]);
        s.insert(b[i]);
        if(a[i]!= b[i]){
            cou++;
            s.insert(a[i]);
        }
    }
    int c[m],check = 0;
    for(int i = 0 ; i< m ;i++) {
        cin>>c[i];
        if(s.find(c[i])!= s.end()) continue;
        else check = 1;
    }

    if(check == 1) cout<<"NO"<<endl;
    else{
        if(cou>m) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i = 0 ; i <m;i++){
                auto pos = find(all(x),c[i]);
                int f = pos-x.begin();
                if(pos == x.end()){
                    auto k = find(all(v),c[i]);
                    f = k-v.begin();
                }

                x[f] = -1;
                cout<<f+1<<" ";
            }
            cout<<endl;
        }
    }



}
}

