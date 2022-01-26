#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
    nn s;
    cin>>s;
    nn ans=0,k=1;
        while(s>0)
        {
           ans++;
           s-=k;
           k+=2;
        }
        cout<<ans<<"\n";

    
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}