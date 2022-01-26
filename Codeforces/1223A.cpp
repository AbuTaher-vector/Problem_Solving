#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define string ss
int main()
{
     nn tt;
     cin>>tt;
     while(tt--)
     {
         nn x;
         cin>>x;
         if(x==2) cout<<2<<endl;
         else if(x%2==0) cout<<0<<endl;
         else if(x%2!=0) cout<<1<<endl;
     }
}