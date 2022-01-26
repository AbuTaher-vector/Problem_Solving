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
         nn x,a=0,b=0,c=0;
         cin>>x;
         if(x==1 || x==2 || x==4) cout<<-1<<endl;
         else if(x%3==0) cout<<x/3<<" "<<0<<" "<<0<<endl;
         else if(x%3==1) cout<<(x-7)/3<<" "<<0<<" "<<1<<endl;
         else if(x%3==2) cout<<(x-5)/3<<" "<<1<<" "<<0<<endl;

     }
}