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
    set<int>s;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    if(s.size()==n) cout<<"NO\n";
    else cout<<"YES\n";
}
int main() {
     setup();
        
        int tt;
        cin>>tt;
        while(tt--) code();

}