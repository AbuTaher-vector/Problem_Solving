#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void setup()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif

}
void code()
{ 
    nn n;
    cin>>n;
    vector<nn>v(n);
    for(nn i=0;i<n;i++) cin>>v[i];
    nn mn=v[n-1],ans=0;
    for(nn i=n-2;i>=0;i--)
    {
        if(v[i]>mn) ans++;
        mn=min(mn,v[i]);

    }
    cout<<ans<<nl;
    

    
      

}
int main()
{
        setup();
        nn tt;
        cin>>tt;
        while(tt--) code();
}