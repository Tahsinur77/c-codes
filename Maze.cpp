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

char ch[505][505];
int n,m,k;

int cou = 0,total = 0;

void DFS(int x,int y){
    //cout<<coun<<" ";
    if(x>=n || x<0 || y>=m || y<0 ) return;
    if(cou >= total - k || ch[x][y] == '#' || ch[x][y] == 's') return;
    if(ch[x][y] == '.'){
        ch[x][y] = 's';
        cou++;
    }

    DFS(x+1,y);
    DFS(x-1,y);
    DFS(x,y+1);
    DFS(x,y-1);
}


int main(){

cin>>n>>m>>k;

int x,y,check = 0 ;

for(int i = 0 ; i <n ;i++){
    for(int j = 0 ; j <m ; j++){
        cin>>ch[i][j];
        if(ch[i][j] == '.'){
            total++;
            if(check == 0){
                x = i;
                y = j ;
                check = 1;
            }
        }
    }
}

DFS(x,y);

for(int i = 0 ; i<n;i++){
    for(int j = 0 ; j< m ; j++){
        if(ch[i][j] == '.')cout<<"X";
        else if(ch[i][j] == 's') cout<<".";
        else cout<<ch[i][j];
    }
    cout<<endl;
}



}

