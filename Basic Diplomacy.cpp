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

    vector<vector<int>> v( m, vector<int> (2));
    map<int,int> mp;
    vector<int> kk;
    map<int,int> mx;
    int check = 0 ;
    for(int i = 0 ; i < m ; i++){
        int k;
        cin>>k;
        kk.pb(k);
        if(k == 1) check++;

        for(int j = 0 ; j< k ; j++){

            int a;
            cin>>a;
            if(k == 1) mx[a]++;
            if(k == 1)
                mp[a]++;
            if(j == 0 ) v[i][j] = a;
            else if(j == 1) v[i][j] = a;
            //cout<<i<<" "<<j<<" "<<v[i][j]<<endl;
        }
    }
    int ma = 0,num = -1 ;

    if(check > (m+1)/2){
        int ok = 0 ;

        for(auto it = mp.begin() ; it != mp.end();it++){
            if(it->se > (m+1)/2){
                ok = 1;
                break ;
            }
            int p = it->fi;
            if(it->se > ma) num = p;
        }

        if(ok == 1) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            for(int i =  0; i < m ; i++){
                if(kk[i] == 1) cout<<v[i][0]<<" ";
                else{
                    if(mx[v[i][0]]<(m+1)/2){
                        cout<<v[i][0]<<" ";
                        mx[v[i][0]]++;
                    }
                    else{
                        cout<<v[i][1]<<" ";
                        mx[v[i][1]]++;
                    }
                }
            }
        }
    }
    else{
        cout<<"YES"<<endl;
        for(int i =  0; i < m ; i++){
            if(kk[i] == 1) cout<<v[i][0]<<" ";
            else{
                if(mx[v[i][0]]<(m+1)/2){
                    cout<<v[i][0]<<" ";
                    mx[v[i][0]]++;
                }
                else{
                    cout<<v[i][1]<<" ";
                    mx[v[i][1]]++;
                }
            }
        }
    }
    cout<<endl;

}
}
