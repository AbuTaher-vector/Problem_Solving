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
       int fi=0,ze=0;
       int t;
       while(n--)
       {
          cin>>t;
          if(t==5) fi++;
          else ze++;
       }
           if(ze==0) cout<<-1<<'\n';
           else 
           {
             if(fi/9==0) cout<<0<<'\n';
             else
             {
                int t=(fi/9)*9;
                while(t--) cout<<5;
                while(ze--) cout<<0;
                cout<<'\n';
             }

           }
       
}