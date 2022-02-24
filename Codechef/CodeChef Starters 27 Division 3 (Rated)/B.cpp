#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     nn n;
     cin>>n;
     nn k=n/10;
     if(n%10!=0) k++;
     cout<<k<<nl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}