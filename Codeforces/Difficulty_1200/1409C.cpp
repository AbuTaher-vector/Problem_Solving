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
    int n,x,y;
    cin>>n>>x>>y;
    int t=n;
    n--;
    int a=y-x;
    int i;
    vector<int>ans;
    ans.push_back(x);
    ans.push_back(y);
    int b=x,c=y;
    for(i=n;i>1;i--)
    {
        if(a%i==0) break;
    }
    int m=a/i;
    while(ans.size()<t && b+m<y)
    {
        ans.push_back(b+m);
        b+=m;
    }
    b=x;
    if(ans.size()<t)
    {
       while(ans.size()<t && b-m>0)
       {
        ans.push_back(b-m);
        b-=m;
       }
    }
     if(ans.size()<t)
    {
       while(ans.size()<t)
       {
        ans.push_back(c+m);
        c+=m;
       }
    }
    sort(ans.begin(),ans.end());
    for(auto x:ans) cout<<x<<" ";
        cout<<'\n';
}
int main()
{
       setup();
       int tt;
       cin>>tt;
       while(tt--) code();
}
