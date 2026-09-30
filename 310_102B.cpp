#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    string s;
    cin>>s;

    
    int count=0;
    while(s.length()>1){
        int sum=0;
        for(char c:s){
            sum+=c-'0';
        }
        s=to_string(sum);
        count++;
    }
    cout<<count<<endl;
    
    return 0;
}