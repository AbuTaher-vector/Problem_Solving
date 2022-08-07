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
void code()
{
    int n;
    cin>>n;
    int ans=0;
    while(n>1)
    {
         ans++;
         n-=2;
         for(int i=2;;i++)
         {
            if((i*2)+i-1<=n) n-=(i*2)+i-1;
            else break;
         }
    }
    cout<<ans<<'\n';

}
int main()
{
       setup();
      
       int tt;
       cin>>tt;
       while(tt--) code();
}    
