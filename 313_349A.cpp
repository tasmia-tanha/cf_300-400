#include <bits/stdc++.h>
using namespace std;
#define ll long long
# define f(i,n) for(int i=0;i<n;i++)
#define pb push_back

int main() 
{
    int n;
    cin>>n;
    vector<int> a;
    f(i,n){
        int x;
        cin>>x;a.pb(x);
    }
    int c25=0,c50=0;
    for(int i=0;i<n;i++){
        if(a[i]==25)c25++;
        else if(a[i]==50){
            c50++;
            if(c25==0){
                cout<<"NO"<<endl;return 0;
            }
            else{
                c25--;
            }
        }
        else if(a[i]==100){
            if(c25>=1 && c50>=1)
            {
                c25--;c50--;
            }
            else if(c25>=3){
                c25-=3;
            }
            else{
                cout<<"NO"<<endl;return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    
    return 0;
}