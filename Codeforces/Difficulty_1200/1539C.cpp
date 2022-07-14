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
     long long int k,x;
     cin >> n >> k >> x;
     vector<long long int>v(n),t;
     for(int i=0;i<n;i++) cin >> v[i];
     sort(v.begin(),v.end());
     long long int cnt=0;
     for(int i=0;i<n-1;i++)
     {
         if(v[i+1]-v[i]>x)
         {
           long long int div=(v[i+1]-v[i])/x,rem=(v[i+1]-v[i])%x;
           if(rem==0) div--;
           t.push_back(div);   
         }
         else continue;
     }
     sort(t.begin(),t.end());
     for(auto x:t)
     {
        if(x<=k)
        {
            cnt++;
            k-=x;

        }
     }
     cout << t.size()-cnt+1 << '\n';
}