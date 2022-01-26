#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
	ss s;
	cin>>s;
    nn k=s.size();
    k++;
    k/=2;
    k--;
    ss a="";
    a.push_back(s[k]);
    nn b=k,c=k;
    while(1)
    {
    	b--,c++;
    	if(c<s.size()) a.push_back(s[c]);
    	if(b>-1) a.push_back(s[b]);
    	
    	if(a.size()==s.size()) break;

    }
    cout<<a<<"\n";

}