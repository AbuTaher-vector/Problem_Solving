#include<bits/stdc++.h>
using namespace std;
void setup()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("out.txt", "w", stdout);
     #endif
}
void code()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int mn=INT_MAX;
       for(int i=0;i<n;i++) 
        {
            cin>>v[i];
            mn=min(mn,v[i]);

        }
        if(n&1) cout<<"Mike\n";
       else
       {
           for(int i=0;i<n;i++)
           {
              if(v[i]==mn)
              {
                if(i%2==0) cout<<"Joe\n";
                else cout<<"Mike\n";

                    break;
              }
           }
       }

    
}
int main() {
     setup();

       int tt;
       cin>>tt;
       while(tt--) code();
}