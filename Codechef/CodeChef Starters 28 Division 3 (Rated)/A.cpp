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
     nn x,cnt=0;
     cin>>n;
     while(n--)
     {
         cin>>x;
         if(x>=10 && x<=60) cnt++;

     }
     cout<<cnt<<nl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
      
}