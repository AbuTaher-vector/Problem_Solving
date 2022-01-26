#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
   nn n;
   cin>>n;
   ss s;
   cin>>s;
   ss x=s;
   sort(x.begin(),x.end());
   nn cnt=0;
   for(nn i=0;i<n;i++) if(x[i]!=s[i]) cnt++;
      cout<<cnt<<"\n";
}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
}