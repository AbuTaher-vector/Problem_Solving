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
  nn sum=0;
  vector<nn>v(n);
  for(nn i=0;i<n;i++) cin>>v[i],sum+=v[i];
    if(sum%n!=0) cout<<-1<<nl;
    else
    {
        nn cnt=0;
        for(nn i=0;i<n;i++) if(v[i]>sum/n) cnt++;
          cout<<cnt<<nl;
    }

     
    
}
int main()
{
  nn tt;
  cin>>tt;
  while(tt--) code();
}