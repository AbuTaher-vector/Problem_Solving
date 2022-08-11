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
       
       long long int a,b;

       cin>>a>>b;

       while(1)
       {
          if(a==0 || b==0) break;

          if(a>=2*b)
          {
             long long k=b*2;
             long long p=a/k;
             a-=(p*k);

          }
          else if(b>=a*2)
          {
            long long k=a*2;
             long long p=b/k;
             b-=(p*k);

          }
          else break;
       }
       cout<<a<<" "<<b<<'\n';
}
