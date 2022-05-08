#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{
    nn n,cnt=0;
    cin>>n;
    vector<nn>v(n);
    for(nn i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==0) cnt++;
    }
    if(cnt){
        cout<<n-cnt<<nl;
        return 0;
    }
    sort(v.begin(),v.end());
    for(nn i=0;i<n-1;i++)
    {
        if(v[i]==v[i+1])
        {
            cout<<n<<nl;
            return 0;
        }
    }
    cout<<n+1<<nl;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
     nn tt;
     cin>>tt;
     while(tt--) code();
}