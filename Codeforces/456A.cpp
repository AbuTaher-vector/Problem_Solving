#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int cmp(pair<nn,nn>p1,pair<nn,nn>p2)
{
    return p1.second<p2.second;
}
int main()
{
   nn  n;
   cin>>n;
   nn x,y;
   vector<pair<nn,nn>>v;
   while(n--)
   {
      cin>>x>>y;
      v.push_back(make_pair(x,y));
   }

   sort(v.begin(),v.end(),cmp);
   for(nn i=0;i<v.size()-1;i++) 
   {
        if(v[i].first>v[i+1].first && v[i].second<v[i+1].second)
        {
            cout<<"Happy Alex"<<nl;
            return 0;
        }
   }
   cout<<"Poor Alex"<<nl;
   
}