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
    nn cnt=0;
    for(nn i=0;i<s.size();i+=2)
    {
        if(s[i]!=tolower(s[i+1]))
        {
          char k=tolower(s[i+1]);
          nn t=k-97;
          if(arr[t]>0)
          {
            arr[t]--;
          }
          else cnt++;
          arr[s[i]-97]++;

        }
    }
    cout<<cnt++<<nl;
}