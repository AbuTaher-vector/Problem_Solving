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
   int n,l,r;
   cin>>n>>l>>r;
   vector<int>v(n);
   for(int i=0;i<n;i++) cin>>v[i];
   long long int cnt=0;
   sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        int x=upper_bound(v.begin()+i+1,v.end(),r-v[i])-v.begin();
        int y=lower_bound(v.begin()+i+1,v.end(),l-v[i])-v.begin();
        cnt+=(x-y);

    }
    cout<<cnt<<"\n";
    


}
int main()
{
     setup();

     int test;
     cin>>test;
     while(test--) code();

}