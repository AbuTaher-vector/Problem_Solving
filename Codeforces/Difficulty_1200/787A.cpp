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
       
       vector<int>v(10000000);
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       for(int i=0;i<=200;i++) v[b+(a*i)]++;
       for(int i=0;i<=200;i++)
       {
           if(v[d+(i*c)])
           {
              cout<<d+(i*c)<<'\n';
              return 0;
           }
       }

       cout<<-1<<'\n';
}