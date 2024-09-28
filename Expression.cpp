#include<iostream>
using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    long long e1 = a*b*c;
    long long e2 = a*(b+c);
    long long e3 = (a+b)*c;
    long long e4 = a+b+c;
    long long e5 = a*b+c;
    long long e6 = a+b*c;
    long long max1 = max(e1,e2);
    long long max2 = max(e3,e4);
    long long max3 = max(e5,e6);
    long long maxi = max(max2,max3);
    long long maximum = max(maxi,max1);
    cout<<maximum<<endl;
    return 0;
}
