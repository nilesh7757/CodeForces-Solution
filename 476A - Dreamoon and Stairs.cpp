#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    if(n<m){
        cout<<-1<<endl;
        return;
    }
    int moves = n/2 + n%2;
    while(moves%m != 0){
        moves += 1;
    }
    cout<<moves<<endl;
    return;
}
int main()
{
    solve();
    return 0;
}
