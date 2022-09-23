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
int main() {
     setup();
        
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        int k=1,ans=0;
        for(int i=0;i<n;i++)
        {
            if(k<=v[i])
            {
                ans++;
                k++;
            }
        }
        cout<<ans<<'\n';

}