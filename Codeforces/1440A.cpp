#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
      nn tt;
      cin>>tt;
      while(tt--)
      {
        nn n,a,b,c;
    cin>>n>>a>>b>>c;
    string s;
    cin>>s;
    ll c1=count(s.begin(),s.end(),'1');
    ll c2=n-c1;
    cout<< min((c1*b)+(c2*a),min((c2*c)+((c1+c2)*b),(c1*c)+((c1+c2)*a)))<<endl;

      }





}