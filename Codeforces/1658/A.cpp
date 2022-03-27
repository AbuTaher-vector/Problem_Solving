#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     nn n,cnt=0;
     cin>>n;
     ss s;
     cin>>s;
     for(nn i=0;i<n-1;i++)
     {
         if(s[i]=='0' && s[i+1]=='0') cnt+=2;
         else if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0' && i+2<n) cnt++;

     }
     cout<<cnt<<nl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();

}