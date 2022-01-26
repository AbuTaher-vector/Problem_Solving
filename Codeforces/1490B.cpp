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
        nn n;
        cin>>n;
        nn arr[n+1];
        nn c0=0,c1=0,c2=0;
        for(nn i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%3==0) c0++;
           else  if(arr[i]%3==1) c1++;
           else   if(arr[i]%3==2) c2++;
        }
      nn k=n/3,a=0,d;
     if(c0==k && c1==k && c2==k) cout<<0<<endl;
     else{
               while( 1)
               {
                if(c0>k)
                 {
                     d=(c0-k);
                      c0-=d;
                     a+=d;
                     c1+=d;
               }
              if(c1>k)
               {
                      d=(c1-k);
                      c1-=d;
                     a+=d;
                     c2+=d;
              }
            if(c2>k)
           {
                      d=(c2-k);
                      c2-=d;
                     a+=d;
                     c0+=d;
            }
           if(c0==c1 && c1==c2) break;

            }
            cout<<a<<endl;


     }


    }

}