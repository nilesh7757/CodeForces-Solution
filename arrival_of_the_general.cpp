#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int max = INT_MIN;
    int min = INT_MAX;
    int maxIdx = -1;
    int minIdx = -1;

    for(int i = 0; i<n; i++){
        int a;
        cin>>a;
        if(max < a){
            max = a;
            maxIdx = i;
        }
        if(min >= a){
            min = a;
            minIdx = i;
        }
    }
     int total = maxIdx+(n-minIdx);
     if(minIdx < maxIdx) total -= 1;
    cout<<total-1<<endl;
    return 0;
}