#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b;
    cin>>a>>b;
    if(b==1){
        cout<<"NO"<<endl;
        return;
    }
    long long  x = a*b;
    long long  y = a;
    long long  z = (b+1)*a;
    cout<<"YES"<<endl;
    cout<<x<<" "<<y<<" "<<z<<endl;
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
