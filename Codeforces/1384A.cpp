#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
      nn n,x;
      cin>>n;
      nn arr[n+1];
      ss s(200,'a');
      cout<<s<<nl;
      for(nn i=0;i<n;i++)
      {
          cin>>arr[i];
          nn k=arr[i];
           if(s[k]=='a') s[k]='b';
          else s[k]='a';
          cout<<s<<nl;
      }
     
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}