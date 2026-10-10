#include <bits/stdc++.h>
using namespace std;
#define ll long long
# define f(i,n) for(int i=0;i<n;i++)
#define pb push_back


int main() 
{
    int q ;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        vector<int> circle;
        f(i,n){
            int x;
            cin>>x;
            circle.pb(x);
        }
        bool found=false;
        for(int i=0;i<n-1;i++){
            if(abs(circle[i+1]-circle[i])==1 || abs(circle[i+1]-circle[i])==n-1 )continue;
            else{
                cout<<"NO"<<endl;
                found=true;
                break;
            }
        }
        if(!found)cout<<"YES"<<endl;
    }
    
    return 0;
}
