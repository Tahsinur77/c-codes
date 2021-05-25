//Arranging The Sheep
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

    string s;
    cin>>s;
    int last_pos = -1,first_pos = -1 ;
    int star1 = 0,star2 = 0 ;

    vector<int> v1,v2 ;

    for(int i = 0 ; i <n/2; i++){
        if(s[i] == '*'){
            last_pos = i;
            star1++;
            v1.pb(i);
        }
    }
    int check = 0;
    for(int i = n/2+1 ; i <n; i++){
        if(s[i] == '*'){
           if(check == 0) {
                first_pos = i;
                check = 1;
           }
            star2++;
            v2.pb(i);
        }
    }
    ll ans = 0;
    if(star1>star2){
        for(int i = 0 ; i<v2.size(); i++){
            ans+= v2[i]-last_pos-1;
            last_pos++;
        }
        int ok1 = 0, ok2 = 0 ;
        for(int i = 0 ; i < v1.size()-1 ;i++){
            int p = v[i+1]-v[i];
            ok1+=p ;
        }
    }
    else if(star1<star2){
        for(int i = 0 ; i<v1.size();i++){
            ans+= first_pos-v1[i]-1;
            first_pos--;
        }
    }






}
}
