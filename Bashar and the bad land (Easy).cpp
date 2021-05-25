/*Author
   SaJiB */

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

const int hn = 1000005;

ll a[hn], sum[hn];

int main(){

int n,x;
cin>>n>>x;

for(int i = 1 ; i <= n ; i++){
    cin>>a[i];
    sum[i] = sum[i-1]+a[i];
}


if(sum[n]<x) cout<<"-1"<<endl;
else{

   int l = 0,last = hn;
   int check = 0 , ans = hn ;
   for(int i = 1; i <= n ; i++){
        if(sum[i]-sum[l]>=x && l<i ){
            while(l<i && sum[i]-sum[l+1]>=x){
                l++;
            }
            if(i==1+l){
                check = 1;
                break;
            }
            last=i-l;
            ans=min(ans,last);
        }
   }

   if(check==1) cout<<"1"<<endl;
   else{
        cout<<ans<<endl;
   }
}

}

