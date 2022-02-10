#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
     nn n;
     cin>>n;
     nn space=n*2;
     for(nn i=0;i<=n;i++)
     {
         for(nn j=1;j<=space;j++) cout<<" ";
          nn x=-1;
          for(nn s=0;s<=i*2;s++)
          {
               if(s<=i) x++;
               else x--;
               cout<<x;
               if(s<i*2) cout<<" ";


          } 
          space-=2;
               cout<<nl;

     }
     space=2;
     nn k=n*2;
     for(nn i=1;i<=n;i++)
     {
          for(nn s=1;s<=space;s++) cout<<" ";
              nn x=-1;
               for(nn j=1;j<k;j++)
               {
                    if(j<=k/2) x++;
                    else x--;
                    cout<<x;
                    if(j<k-1) cout<<" ";

               } 
                    k-=2;
                    space+=2;
               cout<<nl;

     }



}