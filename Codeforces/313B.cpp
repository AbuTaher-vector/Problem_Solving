#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
     ss s;
     cin>>s;
     nn n=s.size();
     vector<nn>v(n);
     for(nn i=1;i<n;i++) if(s[i]==s[i-1]) v[i]=1;
         for(nn i=1;i<n;i++) v[i]=v[i]+v[i-1];
            nn m;
        cin>>m;
        nn x,y;
        while(m--)
        {
            cin>>x>>y;
            cout<<v[y-1]-v[x-1]<<nl;
        }
}