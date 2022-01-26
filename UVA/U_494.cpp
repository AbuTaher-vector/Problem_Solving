#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
	ss s;
	nn cnt=0;
  while(getline(cin,s))
  {
  	for(nn i=0;i<s.size();i++) if(isalpha(s[i]) && !isalpha(s[i+1])) cnt++;
  	cout<<cnt<<"\n";
    cnt=0;
  }
}