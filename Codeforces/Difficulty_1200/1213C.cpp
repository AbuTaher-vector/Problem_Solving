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
    long long int n,m;
     cin >> n >> m;
     int k=m%10;
     long long int x=k,sum=0;
     vector<int>v;
     while(v.size()!=10)
     {
        v.push_back(x%10);
        sum+=(x%10);
        x+=k;

     }
    
    long long int a=n/m;
    long long int b=a%10;
    a/=10;
    long long int ans=sum*a;
    for(int i=0;i<b;i++) ans+=v[i];
        cout << ans << '\n';
}
int main()
{
     setup();

     int tt;
     cin >> tt;
     while(tt--) code();

     

}