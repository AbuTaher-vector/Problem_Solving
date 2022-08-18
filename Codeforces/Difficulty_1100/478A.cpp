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
       
       int a,b,c,d,e;
       cin>>a>>b>>c>>d>>e;
       if(a+b+c+d+e==0) cout<<-1<<'\n';
       else if((a+b+c+d+e)%5==0) cout<<(a+b+c+d+e)/5<<'\n';
       else cout<<-1<<'\n';
}