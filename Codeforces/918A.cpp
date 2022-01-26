#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

     int x;
     cin>>x;
     string s(x,'o');
     for(nn i=1,j=1;i<=x;i+=j,j=i-j)
     s[i-1]='O';
     cout<<s;


}