#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
     ss s;
     cin>>s;
     nn len=s.size(),cnt=0;
     for(int i=0;i<len;i++) if(s[i]=='a') cnt++;
      nn ans=min(len,cnt*2-1);
      cout<<ans<<endl;


}