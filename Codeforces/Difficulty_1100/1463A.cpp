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
    long long int a,b,c;
       cin>>a>>b>>c;

       long long int sum=a+b+c;

       if(sum%9==0 && min(min(a,b),c)>=sum/9) cout<<"YES\n";
       else cout<<"NO\n";
       
}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
}
