#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    ll n,k,cnt=0;
    cin>>n>>k;
    nn a=n*8;
    nn b=n*5;
    nn c=n*2;
    if(a%k==0) cnt+=a/k;
    if(a%k!=0) cnt+=a/k+1;
    if(b%k==0) cnt+=b/k;
     if(b%k!=0) cnt+=b/k+1;
    if(c%k==0) cnt+=c/k;
    if(c%k!=0) cnt+=c/k+1;
    cout<<cnt<<endl;


}
