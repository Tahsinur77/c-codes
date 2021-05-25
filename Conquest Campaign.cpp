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



int main(){

int r,c,n;
cin>>r>>c>>n;

int a[r][c];

for(int i = 0 ; i <r;i++)
    for(int j = 0 ; j<c;j++) a[i][j] = 0;


int ans = 1;
for(int i= 0;i<n;i++){
    int p,q;
    cin>>p>>q;

    a[p-1][q-1] = 1;
}
int k = 1;
while(true){
    //cout<<ans<<" ";
    int check = 0,ok = 0;
    int cou = 0;

    for(int i = 0 ; i <r;i++){
        for(int j = 0 ; j<c;j++){
            //cout<<a[i][j]<<" ";
            if(a[i][j] == 0){
                ok = 1;
                //break;
            }
            else{
                cou++;
            }
        }
       //cout<<endl;
        //if(ok == 1) break;

    }
    //cout<<endl;
    //cout<<cou<<endl;
    if(cou == r*c) break;
    else{
        ans++;
        for(int i= 0 ; i < r;i++){
            for(int j = 0 ; j <c;j++){
                if(a[i][j] == k && a[i][j] !=0){
                    if(i+1<r && a[i+1][j] == 0) a[i+1][j]=k+1;
                    if(i-1>=0 && a[i-1][j] == 0) a[i-1][j]=k+1;
                    if(j+1<c && a[i][j+1] == 0) a[i][j+1]=k+1;
                    if(j-1>=0 && a[i][j-1] == 0) a[i][j-1]=k+1;
                }
            }
        }
    }
    k++;
}
cout<<ans<<endl;

}



