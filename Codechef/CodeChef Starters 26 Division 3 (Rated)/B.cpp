#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n,x;
    cin>>n>>x;
    vector<nn>v(n);
    for(nn i=0;i<n;i++) cin>>v[i];
        nn mx=x;
    for(nn i=0;i<n;i++)
    {
        x+=v[i];
        mx=max(x,mx);

    }
    cout<<mx<<nl;


}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}