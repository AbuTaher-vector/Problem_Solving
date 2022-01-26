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
         ll n;
         cin>>n;
         nn flag=0;
                 for(ll i=1;i*i*i<n;i++)
                  {
             ll k=i*i*i;
             ll w=n-k;
             ll q=cbrt(w);
             if(q*q*q==w)
             {
                 flag=1;
                 break;
             }
                  }

         if(flag) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;

         }


    }

