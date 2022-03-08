#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn l,r,x;
    cin>>l>>r>>x;
    nn lm=l/x;
    nn rm=r/x;
    nn lr=l%x;
    nn rr=r%x;
    if(rm>lm) cout<<max(rm+rr,rm-1+x-1)<<nl;
    else cout<<rm+rr<<nl;

}

int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
      
}