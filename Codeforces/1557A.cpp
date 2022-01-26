#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int cmp(nn a,nn b)
{
  if(b>a) return 0;
  else return 1;
}
void code()
{
  nn n;
  cin>>n;
  nn arr[n+1];
  dd sum=0,mx=-INT_MAX;
  for(nn i=0;i<n;i++)
  {
    cin>>arr[i];
    sum+=arr[i];
    mx=max(mx,arr[i]*1.0);

  } 
  sum-=mx;
  dd ans=(sum/(n-1));
  printf("%.9lf\n",mx+ans);
}
int main()
{
  nn tt;
  cin>>tt;
  while(tt--) code();
}