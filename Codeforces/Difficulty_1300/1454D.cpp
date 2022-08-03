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
int code()
{
    long long int x,a;
    cin>>x;
    a=x;
    map<long long int,int>mp;
    while(x%2==0)
    {
       mp[2]++;
       x/=2;
    }
    for(int i=3;i<=sqrt(x);i+=2)
    {
        while(x%i==0)
        {
       mp[i]++;
       x/=i;
         }  

     }
     if(x>1) mp[x]++;
     long long int mx=INT_MIN,t;
     for(auto x:mp)
     {
        if(x.second>mx)
        {
            mx=x.second;
            t=x.first;
         }


     } 
     if(mx==1)
     {
        cout<<1<<"\n"<<a<<'\n';
        return 0;
     }
     long long int k=mx-1,w=1;
     cout<<mx<<"\n";
     while(k--)
     {
        cout<<t<<" ";
        w*=t;

     }
     cout<<a/w<<'\n';
     return 0;
     
        

}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
        
}    
