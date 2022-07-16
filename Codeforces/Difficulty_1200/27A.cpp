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
       vector<int>v(3005);
       int x;
       while(n--) 
       {
       	  cin>>x;
       	  v[x]++;
       }
       for(int i=1;i<3005;i++)
       {
       	  if(v[i]==0)
       	  {
       	  	  cout<<i<<'\n';
       	  	  break;
       	  }
       }

}