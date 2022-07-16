#include<bits/stdc++.h>
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
}
int main()
{
       setup();

       int n;
       cin>>n;
       vector<int>v(n),a;
       set<int>s;
       for(int i=0;i<n;i++)
       {
           cin>>v[i];
           s.insert(v[i]);
       } 
       for(auto x:s) a.push_back(x);
       if(a.size()>3) cout<<-1<<"\n";
       else
       {
             if(a.size()==1) cout<<0<<'\n';
             else if(a.size()==2)
             {
                int x=a[1]-a[0];
                if(x%2==0) x/=2;
                cout<<x<<'\n';

             } 
             else
             {
                if(a[1]-a[0]==a[2]-a[1]) cout<<a[1]-a[0]<<'\n';
                else cout<<-1<<'\n';
             }
       }


}