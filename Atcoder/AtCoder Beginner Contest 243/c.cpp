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
   vector<pair<nn,nn>>v;
   nn x,y;
   for(nn i=0;i<n;i++)
   {
        cin>>x>>y;
        v.push_back(make_pair(y,x));
   }
   vector<pair<nn,pair<nn,char>>>a(n);
    ss s;
    cin>>s;
    for(nn i=0;i<n;i++)
    {
        a[i].first=v[i].first;
        a[i].second.first=v[i].second;
        a[i].second.second=s[i];

    }
   sort(a.begin(),a.end());
   for(nn i=0;i<n-1;i++) 
   {
        if(a[i].first==a[i+1].first)
        {
            if(a[i].second.second=='R' && a[i+1].second.second=='L' )
            {
                cout<<"Yes"<<nl;
                return 0;
            }
        }
   }
   cout<<"No"<<nl;
    
}