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
     if(n==2)  cout<<2<<'\n'<<1<<" "<<2<<"\n";
     else
     {  
        int a=n-2;
        vector<int>v;
        for(int i=1;i<n;i++)
        {
            if(i!=a) v.push_back(i);
        }
        cout<<2<<'\n';
        cout<<n<<" "<<a<<'\n';
        long long int  sum=(n+a)/2;
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" "<<sum<<'\n';
            sum=(v[i]+sum)/2;
        }

     }
}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();
}