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
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int money=0,a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==25) a++;
            else if(v[i]==50)
            {
                if(a==0)
                {
                    cout<<"NO\n";
                    return 0;
                }
                a--;
                b++;
            }
            else
            {
                if(b>=1 && a>=1) b--,a--;
                else if(a>=3) a-=3;
                else
                {
                    cout<<"NO\n";
                    return 0;
                }
            }
        }
        cout<<"YES\n";
      
}    
