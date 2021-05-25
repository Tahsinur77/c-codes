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



string solve(ull a,ull b, ull d){

    ll p = a*a;
    ll q = b * b;
    ll r = d* d;

    ll g = 7*min3(a,b,d) + q + r;

    //cout<<p<<" "<<g<<endl;

    stringstream ss1;
    ss1<<p;
    string s1;
    ss1>>s1;

    //cout<<s1<<" ";

    stringstream ss2;
    ss2<<g;
    string s2;
    ss2>>s2;
    //cout<<s2<<" "<<endl;
    //cout<<s1<<" "<<s2<<endl;


    int mi = min(s1.size(),s2.size());
    int ma = max(s1.size(),s2.size());
    string f = "";
    //cout<<ma<<" "<<mi<<endl;
    for(int i = 0 ; i < ma-mi ; i++) f+="0";

    if(s1.size() == mi) s1 = f+s1;
    else s2 = f+s2;

    //cout<<s1<<" "<<s2<<endl;

    int check = 0;
    string re = "";
    for(int i = ma - 1; i>=0 ;i--){
        int ff = int(s1[i]-48) + int(s2[i]-48) + check;
        int kk = ff;
        //cout<<kk<<" ";
        if(ff>=10) kk = ff%10;

        re = to_string(kk)+re;

        check  = ff/10 ;
    }
    //cout<<re<<endl;

    if(check == 1) re = "1"+re;


    return re;


}


int main(){

int t;
cin>>t;

while(t--){

    ull a,b,c,d;
    cin>>a>>b>>c>>d;

    ull e = a+d;
    ull f = b+d;
    ull g = c+d;

    string x = solve (e,b,c);
    string y = solve (f,a,c);
    string z = solve(g,a,b);

    //cout<<x<<" "<<y<<" "<<z<<endl;

    int xx = x.size();
    int yy = y.size();
    int zz = z.size();

    int p[3] = {xx,yy,zz};

    sort(p,p+3);
    int check = 0 ;
    if(p[0] == p[2]){
        for(int i = 0 ; i < p[0] ; i++){
            if(int(x[i]) == int(y[i]) && int(x[i]) == int(z[i])) continue;

            if(int(x[i])> int(y[i])){
                    check = 1;
                for(int j = i ; j < p[0]; j++){
                    if(int(x[j]) > int(z[j])){
                        check = 1;
                        break;
                    }
                    if(int(x[j]) < int(z[j])){
                        check = 2;
                        break ;
                    }
                }
                if(check == 1) cout<<x<<endl;
                else cout<<z<<endl;
                break;
            }

            if(int(x[i])> int(z[i])){
                    check = 1;
                for(int j = i ; j < p[0]; j++){
                    if(int(x[j]) > int(y[j])){
                        check = 1;
                        break;
                    }
                    if(int(x[j]) < int(y[j])){
                        check = 2;
                        break ;
                    }
                }
                if(check == 1) cout<<x<<endl;
                else cout<<y<<endl;
                break;
            }


            if(int(z[i])> int(y[i])){
                    check = 1;
                for(int j = i ; j < p[0]; j++){
                    if(int(z[j]) > int(x[j])){
                        check = 1;
                        break;
                    }
                    if(int(x[j]) < int(z[j])){
                        check = 2;
                        break ;
                    }
                }
                if(check == 1) cout<<z<<endl;
                else cout<<x<<endl;
                break;
            }

             if(int(z[i])> int(x[i])){
                    check = 1;
                for(int j = i ; j < p[0]; j++){
                    if(int(z[j]) > int(y[j])){
                        check = 1;
                        break;
                    }
                    if(int(z[j]) < int(y[j])){
                        check = 2;
                        break ;
                    }
                }
                if(check == 1) cout<<z<<endl;
                else cout<<y<<endl;
                break;
            }

             if(int(y[i])> int(z[i])){
                    check = 1;
                for(int j = i ; j < p[0]; j++){
                    if(int(y[j]) > int(x[j])){
                        check = 1;
                        break;
                    }
                    if(int(y[j]) < int(x[j])){
                        check = 2;
                        break ;
                    }
                }
                if(check == 1) cout<<y<<endl;
                else cout<<x<<endl;
                break;
            }
             if(int(y[i])> int(x[i])){
                    check = 1;
                for(int j = i ; j < p[0]; j++){
                    if(int(y[j]) > int(z[j])){
                        check = 1;
                        break;
                    }
                    if(int(y[j]) < int(z[j])){
                        check = 2;
                        break ;
                    }
                }
                if(check == 1) cout<<y<<endl;
                else cout<<z<<endl;
                break;
            }

            break;
        }
    if(check == 0) cout<<x<<endl;

    }
    else if(x.size() == p[2] && p[2] > p[1]){
        cout<<x<<endl;
    }
    else if(y.size() == p[2] && p[2] > p[1]){
        cout<<y<<endl;
    }
    else if(z.size() == p[2] && p[2] > p[1]){
        cout<<z<<endl;
    }
    else if(p[1] == p[2]){
        string one = "", two = "";
        if(x.size() == p[0]){
            one += y;
            two += z;
        }
        else if(y.size() == p[0]){
            one += x;
            two += z;
        }
        else{
            one += x;
            two += y;
        }

        for(int i = 0 ; i < one.size();i++){
            if(int(one[i])>int(two[i])) {
                check = 1;
                break;
            }
            else if(int(two[i])>int(one[i])) {
                check = 2;
                break;
            }
        }

        if(check == 1) cout<<one<<endl;
        else cout<<two<<endl;
    }
    else cout<<x<<endl;







}
}
