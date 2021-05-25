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

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;

    string a,b;
    cin>>a>>b;

    if(a == b) cout<<"YES"<<endl;

    else{

        vector<int>v;
        int one = 0 , two = 0;
        for(int i = 0 ; i <n; i++){
            if(a[i] == '1') one++;
            else two++;

            if(one == two) v.pb(i);
        }

        //for(int i = 0 ; i < v.size();i++) cout<<v[i]<<" ";
        //cout<<endl;
        int check = 0 ;
        for(int i = n-1; i>=0;i--){
            if(a[i] == b[i]) continue;
            int j =i;
            while(a[j]!= b[j] && j>=0){
                j--;
            }
            //cout<<i<<" "<<j<<endl;

            if (binary_search(all(v),i)) check = 0;
            else check = 1;

            if(j>=0 && check != 1){

                if (binary_search(all(v),j)) check = 0;
                else check = 1;
            }
            if(check == 1) break;

            i = j+1;
            //cout<<i<<endl;

        }

        if(check == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}
}

