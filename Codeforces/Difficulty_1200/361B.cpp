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
       
       int n,k;
       cin>>n>>k;
       if(k==n) cout<<-1<<'\n';
       else
       {
           vector<int>v(n);
           for(int i=0;i<n;i++) v[i]=i+1;
           int x=n-k;
           reverse(v.begin(),v.begin()+x);
           reverse(v.begin()+1,v.begin()+x);

           for(int i=0;i<n;i++) cout<<v[i]<<" ";
            cout<<'\n';

       }

}