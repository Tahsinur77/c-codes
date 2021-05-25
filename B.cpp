#include<bits/stdc++.h>
using namespace std;


#define pb   push_back
#define fi   first
#define se   second
#define all(x)    x.begin(),x.end()


#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))

typedef long long int ll;
typedef unsigned long long int ull;
const double pi = 2.0*acos(0.0);

#define IOS ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)


float solve(int a,int b,int c, int d){

    int p = max(a,d);

    int q = b+c;

    float ans = p*q;

    float x,y;

    if(a == p){
        x = a-d;
        y = c;
    }
    else{
        x = d-a;
        y = b;
    }

    ans -= (x*y/2);

    return ans ;


}

int main(){

int t;
cin>>t;
int co = 1;
while(t--){
    int a,b,c,d;

    cin>>a>>b>>c>>d;

    float e,f,g,h;

    e = solve(a,b,c,d);
    f = solve(a,b,d,c);
    g = solve(b,a,c,d);
    h = solve(b,a,d,c);

    float mi = min3(e,f,g);

    mi = min(mi,h);

    cout<<"Case "<<co<<": ";
    printf("%.1f\n",mi);
    //cout<<setprecision(1)<<mi<<endl;

    co++;


}
}

