#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif

}
void code()
{
      ss s[9];
      for(nn i=0;i<9;i++) cin>>s[i];
      s[0][1]=s[0][0];
      s[1][4]=s[1][3];
      s[2][7]=s[2][6];
      s[3][0]=s[3][1];
      s[4][3]=s[4][4];
      s[5][6]=s[5][7];
      s[6][2]=s[6][1];
      s[7][5]=s[7][4];
      s[8][8]=s[8][7];
      for(nn i=0;i<9;i++) cout<<s[i]<<nl;


}
int main()
{
   setup();
   nn tt;
   cin>>tt;
   while(tt--) code();
      
}