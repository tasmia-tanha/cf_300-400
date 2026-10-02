#include <bits/stdc++.h>
using namespace std;
#define ll long long
# define f(i,n) for(int i=0;i<n;i++)
#define pb push_back

int main() 
{
    int n;
    cin>>n;
    vector<pair<int,int>> points;
    f(i,n){
        int x,y;cin>>x>>y;
        points.pb({x,y});

    }
    int found=0;
    for(auto x : points){
    bool right = false, left = false, upper = false, lower = false;

    for(int i = 0; i < n; i++){
        if(points[i].first > x.first && points[i].second == x.second)
            right = true;

        if(points[i].first < x.first && points[i].second == x.second)
            left = true;

        if(points[i].first == x.first && points[i].second > x.second)
            upper = true;

        if(points[i].first == x.first && points[i].second < x.second)
            lower = true;
    }

    if(right && left && upper && lower)
        found++;

    }
    cout<<found<<endl;
    return 0;
}