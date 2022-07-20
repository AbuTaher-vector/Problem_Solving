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
       
       int n;
       cin>>n;
       int cnt=0;
       int x=n,ans=0;
       while(x)
       {
          cnt++;
          x/=10;
       }
        int a=1;
        for(int i=0;i<cnt-1;i++) a*=10;
        ans+=(n-a+1)*cnt;
        cnt--;
        while(cnt)
        {
            a=1,x=9;
            for(int i=0;i<cnt-1;i++) a*=10;
            for(int i=0;i<cnt-1;i++) x=x*10+9;
            ans+=(x-a+1)*cnt;
            cnt--;
        }
        cout<<ans<<'\n';

}
