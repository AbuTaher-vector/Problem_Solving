#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n,m;
    cin>>n>>m;
    nn arr[n+1][m+1];
    set<nn>row,colm;
    for(nn i=0;i<n;i++)
    {
        for(nn j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j])  row.insert(i),colm.insert(j);
        }
    }
    nn x=min(n-row.size(),m-colm.size());
    if(x&1) cout<<"Ashish"<<nl;
    else cout<<"Vivek"<<nl;
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