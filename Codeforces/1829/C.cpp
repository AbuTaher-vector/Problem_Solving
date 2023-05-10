#include "bits/stdc++.h"
using namespace std;
void code(){
	int a=INT_MAX,b=INT_MAX,c=INT_MAX;
	int n,x;
	bool tag0=false,tag1=false,tag2=false;
	string s;
	cin>>n;
	while(n--){
		cin>>x>>s;
		if(s[0]=='1' && s[1]=='0'){
			if(x<a) {
				a=x;
			}
			tag0 = true;
		} else if(s[0]=='0' && s[1]=='1'){
			if(x<b){
				b=x;
			}
			tag1 = true;
		} else if(s[0]=='1' && s[1]=='1'){
			if(x<c){
				c=x;
			}
			tag2 = true;
		}
	}
	if(!tag0 || !tag1) {
		if(!tag2){
			cout<<-1<<"\n";
		} else {
			cout<<c<<"\n";
		}
	} else {
		if(!tag2){
			cout<<a+b<<"\n";
		} else {
			cout<<min(a+b,c)<<"\n";
		}
	}
}
int main(){
   int tt;
   cin>>tt;
   while(tt--) code();
}