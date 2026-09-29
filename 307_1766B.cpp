#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;cin>>s;

    bool found=false;
    for(int i=0;i<s.length()-1;i++){
        string trial=s.substr(i,2);
        int check=s.find(trial,i+2);
        if(check!=-1){
            cout<<"YES"<<endl;
            found=true;
            break;
        }

    }
    if(found==false){
        cout<<"NO"<<endl;
    }
    }
    


    return 0;
}