#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
   nn tt,cnt=0;
   cin>>tt;
   ss s;
   cin>>s;
   for(nn i=0;i<s.size();i++) if(s[i]=='8') cnt++;
   cout<<min(cnt,tt/11)<<endl;



}