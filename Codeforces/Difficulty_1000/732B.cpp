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
int main() {
     setup();
     int n,k;
     vector<int>v;
     cin>>n>>k;
     int x,sum=0;
     cin>>x;
     v.push_back(x);
     n--;
     while(n--)
     {
          cin>>x;
          if(v.back()+x>=k) v.push_back(x);
          else 
          {
            sum+=k-(v.back()+x);
            v.push_back(k-v.back());
          }
     }
     cout<<sum<<'\n';
     for(auto x:v) cout<<x<<" ";
        cout<<'\n';

}