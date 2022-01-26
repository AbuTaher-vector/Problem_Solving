#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
	nn n;
	ss s;
	cin>>n>>s;
	nn l=s.size(),cnt=0;
	for(nn i=l-1;i>=0;i--) 
	{
		if(s[i]==')') cnt++;
		else break;
	}
	nn w=l-cnt;
	if(cnt>w) cout<<"Yes"<<"\n";
	else cout<<"No\n";
}
int main()
{
	nn tt;
	cin>>tt;
	while(tt--) code();
  
}