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

int a;
map<int ,int> x;
for(int i = 0 ; i < n ; i++){
    cin>>a;
    int p = a%m ;
    x[p]++;
}

int ans = 0 ;

for(auto it = x.begin() ; it != x.end(); it++){
    int p = it->fi;
    int q = it->se;
    //cout<<p<<" "<<q;
    if(q == 0) continue ;

    else if(p ==0 ) ans += 1;
    else if(p*2 == m) ans+=1;
    else{

    int d = m - p;
    int e  = x[d];
    ans+= 1;
    if(q!=e)ans+= (max(q,e)-min(q,e)-1);

    //cout<<p<<" "<<q<<" "<<d<<" "<<e<<endl;

    x[d] = 0 ;
    }
    //cout<<ans<<" "<<p<<endl;
x[p] = 0;
}

cout<<ans<<endl;

}
}

