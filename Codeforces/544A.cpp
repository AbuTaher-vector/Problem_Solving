#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
  nn arr[26]={0};
  nn n;
  ss s;
  cin>>n>>s;
  set<char>st(s.begin(),s.end());
  if(st.size()<n || n>26)
  {
    cout<<"NO"<<nl;
    return 0;
  }
  arr[s[0]-97]++;
  nn k=1;
  cout<<"YES"<<nl;
  for(nn i=0;i<s.size();i++)
  {
    cout<<s[i];
    nn w=s[i+1]-97;
    if(s[i]!=s[i+1] && k<n && i!=s.size()-1 && arr[w]==0) 
      {
        cout<<"\n";
        k++;
        arr[w]++;
      }
  
  }
  cout<<nl;


     
}