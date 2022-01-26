#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count;
    cin>>t;
    char ch[t];
    count=t;
    cin>>ch;
        for(int i=0;i<t;i++)
        {
            if(ch[i]>='A' && ch[i]<='Z')
            ch[i]=ch[i]+32;
        }
         sort(ch,ch+t);
      for(int i=0;i<t-1;i++)
        {
            if(ch[i]==ch[i+1]) count--;
        }
        if(count>=26) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}