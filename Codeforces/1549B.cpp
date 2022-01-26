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
    ss a,b;
    cin>>a>>b;
    nn cnt=0;
    for(nn i=0;i<n;i++)
    {
      if(b[i]=='0') continue;

      if(i==0)
      {
        if(a[i]=='0') cnt++;
        else if(a[i+1]=='1')
        {
          cnt++;
          a[i+1]='0';
        }

      }
     else if(i==n-1)
      {
        if(a[i]=='0') cnt++;
        else if(a[i-1]=='1')
        {
          cnt++;
          a[i-1]='0';
        }

      }
      else
      {
        if(a[i]=='0') cnt++;
        else if(a[i-1]=='1')
        {
          cnt++;
          a[i-1]='0';
        }
        else if(a[i+1]=='1')
        {
          cnt++;
          a[i+1]='0';
        }

      }

    }
    cout<<cnt<<"\n";
}
int main()
{
  nn tt;
  cin>>tt;
  while(tt--) code();
}