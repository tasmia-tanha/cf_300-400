#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){

        for(int p=n-i;p>0;p--){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
                
                cout<<j;
                if(j>i || i>0){
                    cout<<" ";
                }
            
            
        }
        

        for(int k=i-1;k>=0;k--){
            cout<<k;
            if(k>0) {
                cout<<" ";
            };
        }

        cout<<endl;
    }

    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<<"  ";
        }
        for(int k=0;k<=n-i;k++){
            if(i!=n){
                cout<<k<<" ";
            }
            else{
                cout<<k;
            }
            
        }
        for(int p=n-i-1;p>=0;p--){
            cout<<p;
            if(p>0)cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}