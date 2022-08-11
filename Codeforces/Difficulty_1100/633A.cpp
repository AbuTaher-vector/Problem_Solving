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
       int a,b,c;
       cin>>a>>b>>c;
       if(b>a) swap(a,b);
       int k=c/a,t=c/b;
       k++,t++;
       for(int i=0;i<=k;i++)
       {
           for(int j=0;j<=t;j++)
           {
             if(a*i+b*j==c)
             {
                cout<<"Yes\n";
                return 0;
             }
           }
       }
       cout<<"No\n";

       
}
