#include <bits/stdc++.h>
using namespace std;
#define ll long long
# define f(i,n) for(int i=0;i<n;i++)
#define pb push_back

int main() 
{
    string s;cin>>s;
    int t;
    cin>>t;
    int compare[s.length()];
    f(i,s.length()){
        compare[i]=0;
    }
    int prefixS[s.length()];
    f(i,s.length()-1){
        if(s[i]==s[i+1]){
            compare[i+1]=1;
        }
        
    }
    f(i,s.length()){
        if(i==0){prefixS[i]=compare[i];}
        else{
            prefixS[i]=prefixS[i-1]+compare[i];
        }
    }
    while(t--){
        int l,r;
        cin>>l>>r;
        int ans=prefixS[r-1]-prefixS[l-1];
        cout<<ans<<endl;

    }
    
    return 0;
}