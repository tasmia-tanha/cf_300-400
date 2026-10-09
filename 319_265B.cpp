#include <bits/stdc++.h>
using namespace std;
#define ll long long
# define f(i,n) for(int i=0;i<n;i++)
#define pb push_back


int main() 
{
    int n;
    cin>>n;
    ll time=0;int prevH=0;
    for(int i=1;i<=n;i++){
        int h;cin>>h;
        if(i==1){
            time+=h+1;
        }

        else if(h==prevH){
            time+=2;
        }
        else if(prevH>h){
            time+=(prevH-h)+2;
        }
        else{
            time+=1+(h-prevH)+1;
        }


        prevH=h;
    }
    cout<<time;
    return 0;
}