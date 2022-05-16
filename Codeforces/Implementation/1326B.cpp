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
int main()
{
        setup();
        nn n;
        cin>>n;
        vector<nn>v(n);
        for(nn i=0;i<n;i++) cin>>v[i];
        cout<<v[0]<<" ";
       nn mx=max(0,v[0]);
        for(nn i=1;i<n;i++)
        {
           if(mx<=v[i-1]) v[i]+=v[i-1];
           else v[i]+=mx;
            cout<<v[i]<<" ";
            mx=max(mx,v[i]);
        }
        cout<<nl;
}