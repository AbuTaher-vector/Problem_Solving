#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

    nn n,k;
    while(scanf("%d %d",&n,&k)==2)
    {
      nn sum=n,l=n,w=0;
      while(1)
      {
        sum+=l/k;
        w=l%k;
        l/=k;
        l+=w;
         if(l<k) break;
      }
      
      cout<<sum<<endl;
    }

}