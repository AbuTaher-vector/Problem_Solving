#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    ss s;
    cin>>s;
    nn a=s.find('r',0);
     nn b=s.find('R',0);
      nn c=s.find('b',0);
       nn d=s.find('B',0);
        nn e=s.find('g',0);
         nn f=s.find('G',0);
         if(b-a>0 && d-c>0 && f-e>0) cout<<"YES"<<nl;
         else cout<<"NO"<<nl;

    
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
      
}