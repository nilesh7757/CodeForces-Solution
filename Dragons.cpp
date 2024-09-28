#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long s, n;
    cin >> s;
    cin>> n;
    vector<pair<int,int>>v;
    int d,p;
    for (int i = 0; i < n; i++)
    {
        cin>>d>>p;
        v.push_back({d,p});
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        d = v[i].first;
        p = v[i].second;
        if(s>d){
            s += p;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}