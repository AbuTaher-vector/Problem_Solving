#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
  ss s;
  cin>>s;
  sort(s.begin(),s.end());
  nn cnt=1,sum=0,cntt=0;
  for(nn i=0;i<s.size()-1;i++)
  {
   if(s[i]==s[i+1]) cnt++;
   else
   {
      if(cnt>1)
         {
            sum+=cnt;
            cntt++;
            cnt=1;
         }
   }

  }
  if(cnt>1) sum+=cnt,cntt++;
  nn n = s.size();
  n-=sum;
  cout<<n/2+cntt<<"\n";
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}