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
       if(a>b) swap(a,b);
       long long int ans=0;
       for(int i=1;i<=a;i++)
       {
            int k=i/5;
            k++;
            int t=k*5;
            int test=t-i;
            if(test<=b)
            {
                ans++;
                int r=b-test;
                ans+=r/5;
            }
            else continue;

       }
       cout<<ans<<'\n';
}    
