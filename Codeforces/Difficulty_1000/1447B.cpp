#include<bits/stdc++.h>
using namespace std;
void setup()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("out.txt", "w", stdout);
     #endif
}
void code()
{
    int n,m;
    cin>>n>>m;
    int mn=200,z=0,neg=0,sum=0;
    int x;
    for(int i=1;i<=n*m;i++)
    {
        cin>>x;
        if(x==0) z++;
        if(x<0) neg++;
        sum+=abs(x);
        mn=min(abs(x),mn);
    }
    if(z || neg%2==0) cout<<sum<<'\n';
    else cout<<sum-mn*2<<'\n';
}
int main() {
     setup();
        
        int tt;
        cin>>tt;
        while(tt--) code();
}