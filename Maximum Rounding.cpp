#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;

    int check = -1;

    for(int i = 0 ; i< s.size();i++){
        if(s[i]>='5'){
            check = i;
            break;
        }
    }

    if(check == 0){
        cout<<"1";
        for(int i = 0 ;i<s.size(); i++) cout<<"0";
        cout<<endl;
    }

    else if(check == -1) cout<<s<<endl;

    else{
        int check2 = -1;
        for(int i = check-1; i>=0 ;i--){
            if(s[i] == '4'){
                check2 = i;
            }
            else{
                break;
            }
        }
        //cout<<check2<<endl;
        if(check2 != -1){
            //cout<<check2<<endl;
            if(check2 == 0) cout<<"1";
            for(int i = 0 ;i<s.size(); i++){
                if(i<check2-1) cout<<s[i];
                else if(i == check2-1){
                    if(s[i] == '0') cout<<"1";
                    else if(s[i] == '1') cout<<"2";
                    else if(s[i] == '2') cout<<"3";
                    else if(s[i] == '3') cout<<"4";
                }
                else cout<<"0";
            }


            cout<<endl;
        }
        else{
            for(int i = 0 ;i<s.size(); i++){
                if(i<check-1) cout<<s[i];
                else if(i == check-1){
                    if(s[i] == '0') cout<<"1";
                    else if(s[i] == '1') cout<<"2";
                    else if(s[i] == '2') cout<<"3";
                    else if(s[i] == '3') cout<<"4";
                }
                else cout<<"0";
            }


            cout<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;

    for(int i = 0 ; i < t; i++){
        solve();
    }

}
