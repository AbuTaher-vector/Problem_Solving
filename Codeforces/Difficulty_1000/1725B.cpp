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
int main() {
     setup();
      int n,k;
      cin>>n>>k;
      vector<int>v(n);
      for(int i=0;i<n;i++) cin>>v[i];

        sort(v.begin(),v.end());

        reverse(v.begin(),v.end());
       int cnt=0;
        for(int i=0;i<v.size();i++)
        {
            int a=v[i];
            int t=k/a;
            t++;
            if(t-1<=v.size()-i-1)
            {
                t--;
                while(t--) v.pop_back();
                cnt++;

            }
            else break;
        }
        cout<<cnt<<'\n';
}