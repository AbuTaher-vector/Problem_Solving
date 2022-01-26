#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
ll p[1000005]={0};
//prime_seive_algorithm
void prime_seive()
{
       for(ll i=3;i<1000005;i+=2) p[i]=1;

       for(ll i=3;i<1000005;i+=2)
       {
           if(p[i]==1)
           {
               for(ll j=i*i;j<1000005;j+=i) p[j]=0;
           }
       }
       p[2]=1;
       p[1]=p[0]=0;

}
int main()
{
   nn tt;
   cin>>tt;
   if(tt==1) cout<<3<<endl;
   else if(tt%2!=0) cout<<1<<endl;
   else{
        for(nn i=1;;i++ )
        {
            nn k=tt*i+1;
            prime_seive();
            if(p[k]==0)
            {
                cout<<i<<endl;
                break;
            }
        }

   }



}
