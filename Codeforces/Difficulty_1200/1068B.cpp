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
       set<int>s;
       for(int i=1;i<=sqrt(x);i++)
       {
           if(x%i==0)
           {
               s.insert(i);
               s.insert(x/i);
           }
       }
       cout<<s.size()<<'\n';
        
        
}    
