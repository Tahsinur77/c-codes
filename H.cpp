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

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    vector< pair <int,int> > v;
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n-2;i++)
    {
        v.pb( make_pair(max(a[i],a[i+2]),i) );
    }
    sort(all(v));
    cout<<v[0].se+1<<" "<<v[0].fi<<endl;
}
