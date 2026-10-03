#include <bits/stdc++.h>
using namespace std;
#define ll long long
# define f(i,n) for(int i=0;i<n;i++)
#define pb push_back

int main() 
{
    int n,l;
    cin>>n>>l;
    vector<int> a;
    f(i,n){
        int x;cin>>x;
        a.pb(x);
    }
    sort(a.begin(),a.end());
    double maxD=a[0];
    double last=l-a[n-1];
    if(last>maxD)maxD=last;

    for(int i=0;i<n-1;i++){
        double d=(a[i+1]-a[i])/2.0;
        if(d>maxD)maxD=d;
    }

    cout<<fixed<<setprecision(10)<<maxD<<endl;

    return 0;
}