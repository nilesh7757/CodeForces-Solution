#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a = n/100;
    int a1 = n%100;
    int b = a1/20;
    int b1 = a1%20;
    int c = b1/10;
    int c1 = b1%10;
    int d = c1/5;
    int d1 = c1%5;
    int e = d1/1;
    cout<<a+b+c+d+e<<endl;
    return 0;
}
