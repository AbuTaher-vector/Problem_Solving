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
       
       int n,a,b;
       cin>>n>>a>>b;
       int cnt=1;
       while(1)
       {
            if(b*cnt>n) break;
            if((n-(cnt*b))%a==0)
            {
                cout<<"YES\n"<<(n-(cnt*b))/a<<" "<<cnt<<'\n';
                return 0;
            }
            cnt++;

       }
       cnt=1;
       while(1)
       {
            if(a*cnt>n) break;
            if((n-(cnt*a))%b==0)
            {
                cout<<"YES\n"<<cnt<<" "<<(n-(cnt*a))/b<<'\n';
                return 0;
            }
            cnt++;

       }
            
       cout<<"NO\n";
}
