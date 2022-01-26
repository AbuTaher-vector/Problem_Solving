#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
      nn n,k;
      ss s;
      cin>>n>>k>>s;
      nn cnt=0,l=0;
      vector<nn>v;
      for(nn i=0;i<s.size();i++) 
        {
          if(s[i] == '*') 
            {
              cnt++;
              v.push_back(i);
            }
        }
        if(cnt<=2) cout<<cnt<<"\n";
        else
        {
          for(nn i=0;i<v.size()-1;i++)
          {
            if(v[i+1]-v[i]<=k && v[i+1]-v[i]!=1) l++;
            
          }
          cout<<2+l<<"\n";
        }



    
    
}
int main()
{  

  nn tt;
  cin>>tt;
  while(tt--) code();
    
}
