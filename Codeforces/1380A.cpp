#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

  nn tt;
  cin>>tt;
  while(tt--)
  {
      nn t;
      cin>>t;
      nn arr[t+1],flag=0,a,b,c,k,l,m;
      for(nn i=0;i<t;i++) cin>>arr[i];
      for(nn i=1;i<t-1;i++)
      {
          a=i-1;
          b=i+1;
          while(arr[a]>=arr[i]) a--;
          while(arr[b]>arr[i]) b++;
          if(a>=0 && b<t)
          {
              flag=1;
              k=a;
              l=i;
              m=b;
              break;

          }
      }

       if(flag) cout<<"YES"<<endl<<k+1<<" "<<l+1<<" "<<m+1<<endl;
       else cout<<"NO"<<endl;

  }


}