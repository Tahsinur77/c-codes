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
    int a,b;
    cin>>a>>b;

    int x = a , y = b ;

    string s;
    cin>>s;

    int n = s.size();


    int p = n/2;

    for(int i = 0,j = n-1 ; i<=j ; i++,j--){
        //cout<<i<<" "<<j<<" "<<s[i]<<" "<<s[j]<<endl;
        if(i == j){
            if(s[i] == '0') a--;
            else if(s[i] == '1') b--;

            continue;
        }
        if(s[i] == '?' && s[j] == '?') continue ;
        else if(s[i] ==s[j]) {
            if(s[i] == '0') a-=2;
            else if(s[i] == '1') b-= 2;

        }
        else{
            //cout<<i<<endl;
            if(((s[i] == '0' && s[j] == '?') || (s[j] == '0' && s[i] == '?')) && a>=2){
                s[i] = '0';
                s[j] = '0';
                a-= 2;;
            }
            else if(((s[i] == '1' && s[j] == '?') || (s[j] == '1' && s[i] == '?')) && b>=2){
                s[i] = '1';
                s[j] = '1';
                b-= 2;;
            }
        }
    }
    //cout<<a<<" "<<b<<endl;
    for(int i = 0 ,j = n-1; i<=j ; i++,j--){
        if(i == j){
            if(s[i] == '?'){
                if(a==1){
                    s[i] = '0';
                    a--;
                }
                else if(b==1){
                    s[i] = '1';
                    b--;
                }
            }
        }
        else if(s[i] == '?' && s[j] == '?'  && a>=2) {
            s[i] = '0';
            s[j] = '0';
            a-=2;
        }
        else if(s[i] == '?' && s[j] == '?' && b>=2){
            s[i] = '1';
            s[j] = '1';
            b-=2;
        }
    }
    /*
    if(n %2 == 1){
        if(s[p] == '?'){
            if(a==1) s[p] = '0';
            else if(b==1) s[p] = '1';
        }
    }*/
    /*int check = 0 ;
    int z = 0 , on = 0 ;
    for(int i = 0,j = n-1 ; i <p ; i++,j--){
        if(s[i] == '0' && s[j] == '0') z+=2;
        else if(s[i] == '1' && s[j] == '1') on+=2;
        if(s[i] == '?' || s[j] == '?'){
            check = 1;
            break;
        }
        if(s[i] != s[j]){
            check =1;
            break;
        }
    }
    if(n%2 == 1){
        if(s[p] == '?') {
            check =1 ;
            break;
        }
        else if(s[p] == '0') z++;
        else if(s[p] == '1') on++;
     }*/

    int check =  0;
    int z = 0 , on = 0;
    for(int i = 0,j = n-1 ; i<=j ; i++,j--){
        if(s[i] == '?' || s[j] == '?'){
            check = 1;
            break;
        }
        if(i == j){
            if(s[i] == '0') z++;
            else if(s[i] == '1') on++;
            else check = 1;

            continue;
        }
        if(s[i] == '0') z++;
        if(s[j] == '0') z++;
        if(s[i] == '1') on++;
        if(s[j] == '1') on++;

        if((s[i] == '0' &&  s[j] =='1') || (s[i] == '1' &&  s[j] =='0')){
            check = 1;
            break;
        }
    }
    //cout<<z<<" "<<on<<" "<<s<<endl;
    if(x != z && y != on) cout<<"-1"<<endl;
    else if(check == 1) cout<<"-1"<<endl;
    else
        cout<<s<<endl;

}
}

