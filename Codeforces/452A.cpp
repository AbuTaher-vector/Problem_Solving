#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
  nn n;
  ss s;
  cin>>n>>s;
  ss arr[10]={"Vaporeon","Jolteon","Flareon","Espeon","Umbreon","Leafeon","Glaceon","Sylveon"};
  vector<pair<nn,ss>>v;
  for(nn i=0;i<8;i++)
  {
      nn k=arr[i].size();
      v.push_back(make_pair(k,arr[i]));

  } 
  for(auto x:v)
  {
      if(x.first==n)
      {
          nn cnt=0;
          ss a=x.second;
          for(nn j=0;j<n;j++)
          {
              if(a[j]==toupper(a[j])) a[j]=tolower(a[j]);
              if(isalpha(s[j]) && s[j]!=a[j]) 
                {
                  cnt++;
                  break;
                }

          }
         if(cnt==0)
         {
          cout<<a<<nl;
              break;
         } 
      }
  }

}