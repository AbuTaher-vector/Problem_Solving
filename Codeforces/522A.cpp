#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
ss lower(ss s)
{
	for(nn i=0;i<s.size();i++) s[i]=tolower(s[i]);
		return s;

}
int main()
{
	nn n,mx=INT_MIN;
	cin>>n;
	map<ss,nn>mp;
	ss a,b,c;
	while(n--)
	{
		cin>>a>>b>>c;
		a=lower(a),c=lower(c);
		mp[a]=mp[c]+1;
		mx=max(mx,mp[a]);

	}
	cout<<mx+1<<nl;
     
     

}