#include<bits/stdc++.h>
using namespace std;

void solve(int m,int n,vector<int>v){
    sort(v.begin(),v.end());
    int mini = INT_MAX;
    for(int i = 0; i<n-m+1; i++){
        int currDiff = (v[i+m-1]-v[i]);
        mini = min(mini,currDiff);
    }
    cout<<mini<<endl;
    return;
}

int main()
{
    int m,n;
    cin>>m>>n;
    vector<int>v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    solve(m,n,v);
    return 0;
}