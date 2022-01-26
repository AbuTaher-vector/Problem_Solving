#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

        nn n,k,cnt2=0;
        cin>>n>>k;
        while(n--)
        {
            ss s;
            cin>>s;
            nn cnt=0;
            for(nn i=0;i<s.size();i++)  if(s[i]=='4' || s[i]=='7') cnt++;
            if(cnt<=k) cnt2++;
        }
        cout<<cnt2<<endl;


}