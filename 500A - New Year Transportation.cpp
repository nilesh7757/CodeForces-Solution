#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t;
    cin>>t;
    vector<int>v(n);
    for(int i = 0; i<n-1; i++){
        cin>>v[i];
    }
    int i = 1;
    while(i<t){
       int nxt = i + v[i-1];
        i = nxt;
    }
    if(i == t){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
