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
    vector<int>v;
    for(int i=1;i<n;i++){
        v.push_back(i);
    }
    vector<int>v2;
    while(1)
    {
        if(__builtin_popcount(v.back())==1)
        {
            v2.push_back(v.back());
            v.pop_back();
            v.push_back(0);
            break;
        }
        else
        {
            v2.push_back(v.back());
            v.pop_back();

        }

    }
    reverse(v2.begin(),v2.end());
    for(auto x:v) cout<<x<<" ";
    for(auto x:v2) cout<<x<<" ";
        cout<<'\n';
}
int main() {
     setup();

       int tt;
       cin>>tt;
       while(tt--) code();
}