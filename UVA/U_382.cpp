#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    cout<<"PERFECTION OUTPUT"<<"\n";

    while(1)
    {
      nn x;
      cin>>x;
      if(x==0) break;
      nn sum=1;
      for(nn i=2;i<=sqrt(x);i++)
      {
        if(x%i==0)
        {
          if(i==x/i) sum+=i;
          else sum+=i,sum+=x/i;
        }
      }
      printf("%5d",x);
      cout<<"  ";   
       if(sum<x || sum==1) cout<<"DEFICIENT"<<"\n";
      else if(sum==x) cout<<"PERFECT"<<"\n";
      else cout<<"ABUNDANT"<<"\n";

    }

    cout<<"END OF OUTPUT"<<"\n";
    
}