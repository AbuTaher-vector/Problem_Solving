#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3,n,a,b;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    int med=a1+a2+a3;
    int cup=b1+b2+b3;
    if(med%5==0)  a=med/5;
    if(med%5!=0)  a=med/5+1;
     if(cup%10==0)  b=cup/10;
    if(cup%5!=0)  b=cup/10+1;
    if(a+b<=n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}