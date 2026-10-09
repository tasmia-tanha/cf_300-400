#include <bits/stdc++.h>
using namespace std;
#define ll long long
# define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
bool isVowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')return true;
    else return false;
}
int main() 
{
    string s,t;
    cin>>s;
    cin>>t;
    if(s.length()!=t.length()){
        cout<<"No"<<endl;
        return 0;
    }
    else{
        f(i,s.length()){
            if(isVowel(s[i]) && isVowel(t[i]) || !isVowel(s[i]) && !isVowel(t[i]))continue;
            else{
                cout<<"No"<<endl;
                return 0;
            }
        }
        cout<<"Yes"<<endl;
    }
    return 0;
}