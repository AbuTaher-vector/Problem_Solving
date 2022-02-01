#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{
     ss s;
     cin>>s;
     nn k=s.size();
     if(k%2!=0) cout<<"NO"<<nl;
     else
     {
          for(nn i=0,j=k/2;i<k/2;i++,j++)
          {
               if(s[i]!=s[j])
               {
                cout<<"NO"<<nl;
                return 0;
               }
          }
          cout<<"YES"<<nl;

     }
     return 0;
  

}
int main()
{
  nn tt;
  cin>>tt;
  while(tt--) code();
}