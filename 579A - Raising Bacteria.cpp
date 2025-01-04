#include<bits/stdc++.h>
using namespace std;
// Binary Representation of 
// 𝑥
// =
// 536870911
// x=536870911:
// 11111111111111111111111111111
// (
// 29 ones in total
// )
// 11111111111111111111111111111(29 ones in total)
// Each 
// 1
// 1 in the binary representation corresponds to adding a bacterium to cover a specific power of 2.

// Doubling Process Explained:
// Day 1:
// Add 1 bacterium for the leftmost 
// 1
// 1 in binary (covers 
// 2
// 28
// 2 
// 28
//  ).
// At night, bacteria double: 
// 1
// →
// 2
// →
// 4
// →
// 8
// →
// ⋯
// →
// 2
// 28
// 1→2→4→8→⋯→2 
// 28
//  .
// Day 2:
// Add 1 bacterium for the next 
// 1
// 1 in binary (covers 
// 2
// 27
// 2 
// 27
//  ).
// At night:
// Previous 
// 2
// 28
// 2 
// 28
//   continues doubling.
// New bacterium doubles: 
// 1
// →
// 2
// →
// 4
// →
// ⋯
// →
// 2
// 27
// 1→2→4→⋯→2 
// 27
//  .
// Day 3:
// Add 1 bacterium for 
// 2
// 26
// 2 
// 26
//  .
// At night:
// Previous 
// 2
// 28
// +
// 2
// 27
// 2 
// 28
//  +2 
// 27
//   continues doubling.
// New bacterium doubles: 
// 1
// →
// 2
// →
// 4
// →
// ⋯
// →
// 2
// 26
// 1→2→4→⋯→2 
// 26
//  .
// Continue This Process:
// Each day, you add 1 bacterium to cover the next power of 2.
// The doubling process automatically handles previously added bacteria.
// On each of the 29 days, you add exactly 1 bacterium to cover one power of 2, from 
// 2
// 28
// 2 
// 28
//   down to 
// 2
// 0
// 2 
// 0
//  . This ensures that the total number of bacteria reaches 
// 536870911
// 536870911 by the end.
int main()
{
    long long n;
    cin>>n;
    int cnt = 0;
    while(n != 0){
        if(n%2 == 1){
            cnt++;
        }
        n = n/2;
    }
    cout<<cnt;
    return 0;
}
