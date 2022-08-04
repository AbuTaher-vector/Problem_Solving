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
    int n;
    cin>>n;
    vector<int>v(n);
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
         cin>>v[i];
    }
    int gcd=0;
    for(int i=0;i<n;i++)
    {
        int ind,mx=0;
        for(int j=0;j<n;j++)
        {
            if(v[j] && __gcd(v[j],gcd)>mx)
            {
                ind=j;
                mx=max(mx,__gcd(v[j],gcd));
            }
        }
        gcd=mx;
        cout<<v[ind]<<" ";
        v[ind]=0;
    }
    cout<<'\n';
}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
        
}    
