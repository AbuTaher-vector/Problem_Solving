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
       nn a,b,c,sum=0;
       nn fact=0;
       cin>>a>>b>>c;
       while(1)
       {
           if(b>=1 && c>=2)
           {
               sum+=3;
               b--;
               c-=2;
               fact=1;
           }
           if(fact==0) break;
           fact=0;
       }
       fact=0;
       while(1)
       {
           if(a>=1 && b>=2)
           {
               sum+=3;
               a--;
               b-=2;
               fact=1;
           }
           if(fact==0) break;
           fact=0;
       }
       cout<<sum<<endl;


   }

}