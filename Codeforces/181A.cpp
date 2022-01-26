#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

    int n,m;
cin>>n>>m;
int x=0,y=0;
for (int i=0;i<n;++i){
for (int j=0;j<m;++j){
char c;
cin>>c;
if(c=='*'){x^=i+1;y^=j+1;}}}
cout<<x<<" "<<y;}