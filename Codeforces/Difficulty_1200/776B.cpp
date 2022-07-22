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
const int N=1e7;
vector<int>arr(N);
void prime()
{
    arr[0]++;
    arr[1]++;
    for(int i=2;i<=N;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*2;j<=N;j+=i) arr[j]++;
        }

    }
}
int main()
{
       setup();
       prime();
       int x;
       cin>>x;
       if(x>2) cout<<2<<'\n';
       else cout<<1<<'\n';
       for(int i=2;i<=x+1;i++)
       {
            if(arr[i]==0) cout<<1<<" ";
            else cout<<2<<" ";
       }
       cout<<'\n';
}
