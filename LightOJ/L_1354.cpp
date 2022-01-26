#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int binary_to_decimal(ll a)
{
  nn number = 0,i=0,rem;
  while(a!=0)
  {
    rem = a%10;
    a/=10;

    number+=rem*pow(2,i);
    i++;
  }
  return number;
}
nn j=0;
void code()
{
      ss s,y,x;
      cin>>s>>y;
      vector<nn>v;
      vector<nn>v2;
      for(nn i=0;i<s.size();i++)
      {
        if(s[i]!='.') x+=s[i];
        else v.push_back(stoi(x)),x.clear();
          

      }
      v.push_back(stoi(x)),x.clear();

      for(nn i=0;i<y.size();i++)
      {
        if(y[i]!='.') x+=y[i];
        else v2.push_back(stoi(x)),x.clear();
          

      }
      v2.push_back(stoi(x)),x.clear();
      nn flag=1;
      for(nn i=0;i<v.size();i++)
      {
        if(v[i]!= binary_to_decimal(v2[i]))
        {
          flag=0;
          break;
        }
      }
      ++j;
      cout<<"Case "<<j<<": ";
      if(flag) cout<<"Yes"<<"\n";
      else cout<<"No"<<"\n";
 

 }
      
int main()
{
  nn tt;
  cin>>tt;
  while(tt--) code();

    
}
