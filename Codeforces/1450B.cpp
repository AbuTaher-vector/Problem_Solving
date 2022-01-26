#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
 void code()
 {
       nn n,k;
       cin>>n>>k;
       nn x[n+1],y[n+1];
       nn flag=0;
       for( nn i = 0 ; i<n; i++) cin>>x[i]>>y[i];

        for(nn i=0;i<n;i++)
        {

          nn mx=0;
          for(nn j=0;j<n;j++) mx=max(mx,abs(x[i]-x[j])+abs(y[i]-y[j]));

           if(mx<=k)
           {
            flag=1;
            break;
           }
        }
        if(flag) cout<<1<<endl;
        else cout<<-1<<endl;

 }

int main()
{

  nn tt;
  cin>>tt;
  while(tt--)
  {
    code();
  }
    
}
