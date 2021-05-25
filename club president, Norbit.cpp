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

string s;
getline(cin,s);

int a[7] = {64,32,16,8,4,2,1};

string ans = "";
string k = "";
for(int i = 0 ; i<s.size();i++){
    //cout<<i<<" ";
    if(s[i] == ' ') {
        ans += k;
        k = "";
    }
    if(s[i] =='u' || s[i] == 'm'){
        if(s[i] == 'u') k+= "1";
        else k+= "0";
    }
    if(s[i] != 'u' && s[i] != 'm' &&  (s[i]>= 97 && s[i]<=122) || (s[i]>= 65 && s[i]<= 90)){
        while(s[i] != ' ' && i<s.size()){
            i++;
            k = "";
        }
    }
}

ans += k;

//cout<<ans<<endl;

int check = 0;
int d= 0;
string out = "";

for(int i = 0;i<ans.size(); i++){
    if(ans[i] == '0'){
        check++;
        //if(check == 7) check = 0 ;
    }
    else{
        d+= a[check];
        //cout<<a[check]<<" ";
        check++;
    }
        if(check == 7){
            //cout<<d<<endl;
            char c= char(d);
            //cout<<c<<" ";
            out += c;
            //cout<<out<<endl;
            check = 0;
            d = 0;
        }

}
/*
if(check != 0){
    char c= char(d);
    out = c + out;
}*/
cout<<out<<endl;


}

