#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
     nn n;
     cin>>n;
     vector<nn>a(n),b(n-1),c(n-2);
     for(nn i=0;i<n;i++) cin>>a[i];
        for(nn i=0;i<n-1;i++) cin>>b[i];
            for(nn i=0;i<n-2;i++) cin>>c[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    nn flag=1;
    for(nn i=0;i<n-1;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<a[i]<<nl;
            flag=0;
            break;
        }
    }
    if(flag) cout<<a[n-1]<<nl;
    flag=1;
   for(nn i=0;i<n-2;i++)
    {
        if(b[i]!=c[i])
        {
            cout<<b[i]<<nl;
            flag=0;
            break;
        }
    }
    if(flag) cout<<b[n-2]<<nl;
}