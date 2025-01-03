#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    vector<int>v(n,0);
    long long sum = 0;
    long long s = 1;
    for(int i = 0; i<m; i++){
        int a;
        cin>>a;
        sum = sum +  (a - s + n)%n;
        s = a;
    }
    cout<<sum<<endl;
    return 0;
}
