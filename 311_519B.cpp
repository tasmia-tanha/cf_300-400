#include <bits/stdc++.h>
using namespace std;
#define ll long long
# define f(i,n) for(int i=0;i<n;i++)
#define pb push_back

int main() 
{
    int n;cin>>n;
    
    ll a=0;
    f(i,n){
        int x;cin>>x;
        a+=x;
    }
    
    ll b=0;
    f(i,n-1){
        int x;cin>>x;
        b+=x;
    }
    
    ll c=0;
    f(i,n-2){
        int x;cin>>x;
        c+=x;
    }
    cout<<a-b<<endl;
    cout<<b-c<<endl;
    
    return 0;
}