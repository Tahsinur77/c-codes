#include<bits/stdc++.h>
using namespace std;


#define pb   push_back
#define fi   first
#define se   second
#define mk   make_pair
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

ll gcd(ll a, ll b)
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
    int n;
    cin>>n;

    char ch[n][n];
    vector<pair<int,int>> v;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <n ;j++){
            cin>>ch[i][j];

            if(ch[i][j] == '*'){
                v.pb(make_pair(i,j));
            }
        }
    }
    if(v[0].fi == v[1].fi){
        if(v[0].fi == 0){
            ch[1][v[1].se] = '*';
            ch[1][v[0].se] = '*';
        }
        else{
            ch[0][v[1].se] = '*';
            ch[0][v[0].se] = '*';
        }
    }
    else if(v[0].se == v[1].se){
        if(v[0].se == 0){
            ch[v[1].fi][1] = '*';
            ch[v[0].fi][1] = '*';
        }
        else{
            ch[v[1].fi][0] = '*';
            ch[v[0].fi][0] = '*';
        }
    }
    else{
        ch[v[0].fi][v[1].se] = '*';
        ch[v[1].fi][v[0].se] = '*';
    }

    for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j< n ;j++){
            cout<<ch[i][j];
        }
        cout<<endl;
    }

}
}

