#include <bits/stdc++.h>
using namespace std;
#define ll long long
# define f(i,n) for(int i=0;i<n;i++)
#define pb push_back

int main() 
{
    int n;cin>>n;
    vector<int> a;
    f(i,n){
        int x;cin>>x;a.pb(x);
    }
    sort(a.begin(),a.end());
    int negC=0,posC=0;
    vector<int> neg;
    vector<int> pos;
    f(i,n){
        if(a[i]<0){
            negC++;
            neg.pb(a[i]);
        }
        else if(a[i]>0){
            posC++;
            pos.pb(a[i]);
        }
    }

    if(negC%2!=0){

        
        if(posC!=0){
            cout<<negC<<" ";
        for(auto x: neg){
            cout<<x<<" ";
        }
        cout<<endl;

        cout<<posC<<" ";
        for(auto x: pos){
            cout<<x<<" ";
        }
        cout<<endl;

        cout<<"1 0"<<endl;
        }
        else{
            cout<<1<<" ";
            cout<<neg[0]<<endl;
            neg.erase(neg.begin());
            negC--;

            cout<<negC<<" ";
            for(auto x:neg){
                cout<<x<<" ";
            }
            cout<<endl;
            cout<<"1 0"<<endl;
        }
        

    }
    else{
        if(posC!=0){
        cout<<1<<" ";
        cout<<neg[0]<<endl;
        neg.erase(neg.begin());
        negC--;

        cout<<posC<<" ";
        for(auto x:pos){
            cout<<x<<" ";
        }
        cout<<endl;
        cout<<negC+1<<" "<<0<<" ";
        for(auto x:neg){
            cout<<x<<" ";
        }
        cout<<endl;
        }

        else{
        cout<<1<<" ";
        cout<<neg[0]<<endl;
        neg.erase(neg.begin());
        negC--;

        int second=neg[0];
        neg.erase(neg.begin());
        negC--;

        cout<<negC<<" ";
        for(auto x:neg){
            cout<<x<<" ";
        }
        cout<<endl;

        cout<<"2 0 "<<second<<endl;
        }
        

    }
    
    return 0;
}