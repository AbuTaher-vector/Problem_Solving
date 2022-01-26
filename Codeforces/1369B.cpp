#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
     nn n,i,cnt=0;
     ss s;
     cin>>n>>s;
     ss a="";
     reverse(s.begin(),s.end());
     for(i=0;i<n;i++)
     {
          a.push_back(s[i]);
          if(s[i]=='0') break;

     }
     for(nn j=i+1;j<n;j++)
     {
          if(s[j]=='0') cnt++;
          else cnt=0;
     }
     while(cnt--) cout<<0;
     reverse(a.begin(),a.end());
     cout<<a<<nl;

}
int main()
{  
         
      nn tt;
      cin>>tt;
      while(tt--) code();
}