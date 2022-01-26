#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k2,k3,k5,k6,a,b;
    cin>>k2>>k3>>k5>>k6;
     a=min(k2,min(k5,k6));
    k2-=a;
    if(k2==0) b=0;
    else  b=min(k2,k3);
    cout<<256*a+32*b<<endl;
}