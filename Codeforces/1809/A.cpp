#include "bits/stdc++.h"
using namespace std;
void code(){
	string s,x="codeforces";
	cin>>s;
	int ans = 0;
	for(int i=0;i<x.size();i++) if(s[i]!=x[i]) ans++;
		cout<<ans<<"\n";

}
int main(){
   int tt;
   cin>>tt;
   while(tt--) code();
}