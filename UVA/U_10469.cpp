#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void dectobi(nn x,nn y)
{
       vector<nn>v;
       vector<nn>v1;
       if(y>x) swap(x,y);
  while(x>0)
  {
    v.push_back(x%2);
    x/=2;
    
  }
   while(y>0)
  {
    v1.push_back(y%2);
    y/=2;
    
  }
  for(nn i=0;i<v1.size();i++)
  {
    if(v[i]==1 && v1[i]==1) v[i]=0;
    else v[i]=v[i]+v1[i];
  }
  nn number=0;
  for(nn i=0;i<v.size();i++)
  {
    number+=v[i]*pow(2,i);
  }
  cout<<number<<"\n";
}

int main()
{
  nn a,b;
  while(scanf("%d %d",&a,&b)==2)
  {
    dectobi(a,b);
  }

     
    
}