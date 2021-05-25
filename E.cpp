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


int main(){

string s;
getline(cin,s);

int check = 0;

for(int i = 0 ; i < s.size();i++){
    if(s[i] == ' ') check++;
}


int n;
cin>>n;


vector<string> v;

for(int i = 0 ; i < n ; i++){
    string a;
    cin>>a;
    v.pb(a);
}
vector<string> x,y;
int p = 0,k = check;
while(p<n-1){
    //cout<<p<<" ";
    k%= v.size();
    if(p%2 ==0 ){
        x.pb(v[k]);
    }
    else{
        y.pb(v[k]);
    }

    p++;
    for(int i = k ; i<v.size()-1;i++){
        v[i] = v[i+1];
    }
    v.pop_back();
    k+=check;
    //k%= v.size();
}
if(p%2 ==0 ){
        x.pb(v[0]);
    }
    else{
        y.pb(v[0]);
    }

cout<<x.size()<<endl;
for(int i = 0 ; i<x.size();i++) cout<<x[i]<<endl;
cout<<y.size()<<endl;
if(y.size()>0){

for(int i = 0 ; i < y.size();i++) cout<<y[i]<<endl;
}

}
