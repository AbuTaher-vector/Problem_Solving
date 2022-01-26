#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
    nn n;ss s;
    cin>>n>>s;
    stack<char>st;
    nn mx=0,l=0,cnt=0,flag=0;
    for(nn i=0;i<s.size();i++)
    {
        if(isalpha(s[i])) l++;
        else
        {
          if(l!=0 && flag==1) cnt++;
          else mx=max(l,mx);
          l=0;
          if(s[i]=='(') flag=1;
          else if(s[i]==')') flag=0;
        }
    }
    mx=max(l,mx);
    cout<<mx<<" "<<cnt<<nl;
  
}