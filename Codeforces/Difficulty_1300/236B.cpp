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
       int a,b,c;
       cin>>a>>b>>c;
       vector<int>v(1000009);
       long long int n=1073741824;
       for(int i=1;i<=1000000;i++)
       {
             for(int j=i;j<=1000000;j+=i) v[j]++;
       }
       int sum=0;
       for(int i=1;i<=a;i++)
       {
           for(int j=1;j<=b;j++)
           {
               for(int k=1;k<=c;k++)
               {
                    sum+=v[i*j*k]%n;
                    sum%=n;
               }
           }
       }
       cout<<sum<<'\n';
     
}    
