#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     vector<nn>v(3);
   nn x;
   cin>>x;
   for(nn i=0;i<3;i++)
   {
      cin>>v[i];
   }
   sort(v.begin(),v.end());
   cout<<v[0]*(x-1)+v[1]<<nl;

}
int main()
{
  nn tt;
  cin>>tt;
  while(tt--) code();
      
}