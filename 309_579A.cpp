#include <bits/stdc++.h>
using namespace std;

int need(int x){
    if(x==1)return 1;
    long long c=2;
  
    while(c<=x){
        long long y=c*2;
        if(y==x)return y;
        if(y>x) return c;
        c=y;
    }
    return 1;
}
int main() 
{
    
    int n;
    cin>>n;
    
    int count=0;
    while(n>0){
        int x=need(n);
        n-=x;
        count++;
    }

    cout<<count;
    
    return 0;
}