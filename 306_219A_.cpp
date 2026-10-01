#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin>>k;
    string s;
    cin>>s;
    map<char,int> freq;
    string has="";
    for(int i=0;i<s.length();i++){
        freq[s[i]]++;
    }
    if(s.length()%k!=0){
        cout<<-1;
        return 0;
    }
    else{
        
        string ns="";
        
        for(auto x:freq){
            if(x.second%k!=0){
                cout<<-1;return 0;
            }
            int initial=x.second/k;
            has+=x.first;

            for(int i=1;i<=initial;i++){
                ns+=x.first;
            }
            
        }
        for(int i=0;i<has.length();i++){
            int check=ns.find(has[i]);
            if(check==-1){
                cout<<-1;
                return 0;
            }
        }
        string final=ns;
        for(int i=1;i<=k-1;i++){
            final+=ns;
        }
        cout<<final;
        
    }


    return 0;
}


