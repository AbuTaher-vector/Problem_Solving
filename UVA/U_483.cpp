#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
	ss s;
  while(getline(cin,s))
  {
  	ss temp="";
  	for(nn i=0;i<s.size();i++)
  	{
  		if(s[i]!=' ') temp+=s[i];
  		else{
  			reverse(temp.begin(),temp.end());
  			cout<<temp<<" ";
  			temp="";
  		}

  	}
  			reverse(temp.begin(),temp.end());
  			cout<<temp<<"\n";
  	          

  	
  }
}