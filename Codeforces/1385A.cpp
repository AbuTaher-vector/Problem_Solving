#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int tt,x,y=3;
    cin>>tt;
    vector<int>v;
    while(tt--)
    {
        for(int i=0;i<y;i++)
        {
            cin>>x;
            v.pb(x);
        }
            sort(v.begin(),v.end());
            if(v[1]==v[2]) cout<<"YES"<<endl<<v[0]<<" "<<v[0]<<" "<<v[2]<<endl;
            else cout<<"NO"<<endl;
            while(v.size()!=0) v.erase(v.begin()+0);
    }
}