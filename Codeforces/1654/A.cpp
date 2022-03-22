#include<bits/stdc++.h>
using namespace std;
void code()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    cout<<v[0]+v[1]<<endl;

}
int main()
{
    int tt;
    cin>>tt;
    while(tt--) code();
}