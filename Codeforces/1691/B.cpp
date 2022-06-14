#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n' 
int code()
{
     nn n;
     cin>>n;
     vector<nn>v(n);
     map<nn,nn>mp;
     for(nn i=0;i<n;i++) 
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        for(auto x:mp)
        {
            if(x.second==1) 
            {
                cout<<-1<<nl;
                return 0;
            }
        }
        int x=1,y;
        for(nn i=0;i<n-1;i++)
        {
            if(v[i]!=v[i+1])
            {
                y=i+1;

                cout<<y<<" ";
                for(nn i=x;i<y;i++) cout<<i<<" ";
                x=y+1;
                
            }
        }
        cout<<n<<" ";
       for(nn i=x;i<n;i++) cout<<i<<" ";
        cout<<nl;
}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif

     nn tt;
     cin>>tt;
     while(tt--) code();
      
}