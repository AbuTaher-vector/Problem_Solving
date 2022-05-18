#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void setup()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif

}
int main()
{
   setup();
   nn a,b;
   cin>>a>>b;
   nn cnt=0;
   while(a && b && a+b>=3)
   {
       if(a<b) a-=1,b-=2;
       else a-=2,b-=1;
       cnt++;
   }
   cout<<cnt<<nl;
    

}