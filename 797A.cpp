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
       
        int x,k;
        cin>>x>>k;
        vector<int>v;
        if(k==1)
        {
            cout<<x<<'\n';
            return 0;
        }
        while(x%2==0)
        {
             v.push_back(2);
             x/=2;
             if(v.size()==k-1 && x!=1)
             {
                for(auto x:v) cout<<x<<" ";
                    cout<<x<<'\n';
                   return 0;
             }
        }
       for(int i=3;i<=sqrt(x);i+=2)
       {
           while(x%i==0)
           {
             v.push_back(i);
             x/=i;
             if(v.size()==k-1 && x!=1)
             {
                for(auto x:v) cout<<x<<" ";
                    cout<<x<<'\n';
                   return 0;
             }

           }
       }
       cout<<-1<<'\n';
}
