#include <bits/stdc++.h>
using namespace std;
int Div(int a,int b,int count){
    int c;
    
    
    if(b%a==0){
     c=b/a;
     count++;
     if(c==1){return count-1;}
     else Div(a,c,count);
    }
    else{
        return 0;
    }
    
}
int main() {
    int k,l;
    cin>>k;
    cin>>l;
    if(k==l)
    {
    cout<<"YES"<<endl;
    cout<<0;
    return 0;
    }
    int count=0;
    int c=Div(k,l,count);
    if(c==0){
        cout<<"NO"<<endl;

    }
    else{
        cout<<"YES"<<endl;
        cout<<c;
    }


    return 0;
}