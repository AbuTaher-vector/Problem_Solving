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
       vector<long long int>v(n);
       for(int i=0;i<n;i++) cin>>v[i];

        set<int>s;
        for(int i=0;i<n;i++)
        {
            while(v[i]%2==0) v[i]/=2;
            while(v[i]%3==0) v[i]/=3;

            s.insert(v[i]);
        }
        if(s.size()>1) cout<<"NO\n";
        else cout<<"YES\n";

}    
