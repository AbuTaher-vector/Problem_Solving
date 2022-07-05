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
    int n,m;
    cin>>n>>m;
    string a="1001",b="0110";
    string s[60];
    int x=13;
    while(x--) for(auto t:a) s[0].push_back(t);
    int cnt=0;
    for(int i=1;i<=52;i++)
    {
        cnt++;
        x=13;
        while(x--) for(auto t:b) s[i].push_back(t);
        if(cnt==2)
        {
            cnt=0;
            swap(a,b);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) cout<<s[i][j]<<" ";
            cout<<"\n";
    }
}
int main()
{
     setup();

     int tt;
     cin>>tt;
     while(tt--) code();
}