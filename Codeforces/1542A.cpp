#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n;
    cin>>n;
    nn cnt=0,x;
    for(nn i=1;i<=2*n;i++)
    {
        cin>>x;
        if(x%2!=0) cnt++;
    }
    if(cnt==n) cout<<"Yes"<<nl;
    else cout<<"No"<<nl;
    
}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
}