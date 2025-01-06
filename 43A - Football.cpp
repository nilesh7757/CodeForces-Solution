#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    unordered_map<string,int>mp;
    for(int i = 0; i<n; i++){
        string s;
        cin>>s;
        mp[s]++;
    }
    string ans="";
    int a = 0;
    for(auto it:mp){
        if(it.second > a){
            ans = it.first;
            a = it.second;
        }
    }
    cout<<ans<<endl;
    return 0;
}
