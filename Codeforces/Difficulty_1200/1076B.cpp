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

       long long int x;
       cin>>x;
       int ans=0;
       if(x%2==0) cout<<x/2<<'\n';
       else
       {
           int div=0;
           for(int i=3;i<=sqrt(x);i++)
           {
               if(x%i==0) 
                {
                    div=i;
                    break;
                }

           }
           if(div==0) cout<<1<<'\n';
           else cout<<(x-div)/2+1<<'\n';
       }
}