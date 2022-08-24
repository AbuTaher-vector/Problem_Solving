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
       vector<long long int>a(n),b(n);
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           b[i]=a[i];
       }
       map<long long int,long long int>x,y;
       x[a[0]]++;
       for(int i=1;i<n;i++)
       {
          a[i]+=a[i-1];
          x[a[i]]++;
       }
       y[b[n-1]]++;
        for(int i=n-2;i>=0;i--)
       {
          b[i]+=b[i+1];
          y[b[i]]++;
       }
       long long int mx=0;
       for(int i=0;i<n-1;i++)
       {
            y[b[i]]=0;
            if(y[a[i]]) mx=max(mx,a[i]);

       }
       cout<<mx<<'\n';

}