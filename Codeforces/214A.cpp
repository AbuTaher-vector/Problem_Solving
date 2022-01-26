#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define sss string
int main()
{
      nn n,m,cnt=0;
      cin>>n>>m;
      for(int i=0;i<=sqrt(n);i++)
      {
          for(int j=0;j<=sqrt(m);j++)
          {
              if(i*i+j==n && j*j+i==m) cnt++;
          }
      }
      cout<<cnt<<endl;

}