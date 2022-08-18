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
       
       int a,b;
       cin>>a>>b;
       if(a<2 && b<2)
       {
           cout<<0<<'\n';
           return 0;
       }
       if(b<a) swap(a,b);
       int cnt=0;
       while(1)
       {
              a++,b-=2;
              cnt++;
              if(b==0) break;
              if(b<a) swap(a,b);
       }
       cout<<cnt<<'\n';
}