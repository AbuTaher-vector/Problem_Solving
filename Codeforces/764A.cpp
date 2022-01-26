#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

  nn n,m,z,cnt=0;
  cin>>n>>m>>z;
  for(nn i=n;i<=z;i++) if(i%n==0 && i%m==0) cnt++;
   cout<<cnt<<endl;
}
