#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
using namespace std;
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
  vector<nn>a(n),b(n),c(n),d(n);
  for(nn i=0;i<n;i++)
  {
   cin>>a[i];
   c[i]=a[i];

  } 
   for(nn i=0;i<n;i++)
  {
   cin>>b[i];
   d[i]=b[i];

  } 
      vector<pair<nn,nn>>x;
      vector<pair<nn,nn>>y;

    for(nn i=0;i<n-1;i++)
    {
        for(nn j=0;j<n-i-1;j++)
        {
             if(a[j]>a[j+1])
             {
                 swap(a[j],a[j+1]);
                 swap(b[j],b[j+1]);
                 x.push_back(make_pair(j+1,j+2));
             }
        }
    }
    if(!is_sorted(b.begin(),b.end()))
    {
      for(nn i=0;i<n-1;i++)
       {
        for(nn j=0;j<n-i-1;j++)
        {
             if(b[j]>b[j+1])
             {
                 swap(b[j],b[j+1]);
                 swap(a[j],a[j+1]);
                 x.push_back(make_pair(j+1,j+2));
             }
        }
    }

    }
    
    if(x.size()<=10000 && is_sorted(a.begin(),a.end()) && is_sorted(b.begin(),b.end()))
    {
        cout<<x.size()<<nl;
        for(nn i=0;i<x.size();i++) cout<<x[i].first<<" "<<x[i].second<<nl;
    }
    else cout<<-1<<nl;
   
}
int main()
{
   setup();
   nn tt;
   cin>>tt;
   while(tt--) code();
      
}