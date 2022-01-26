#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn n,k;
    cin>>n>>k;
    ss s;
    cin>>s;
    nn y=k,flag=0;
    for(nn i=0;i<s.size();i++)
    {
            if(s[i]=='#')
            {
                y--;
                if(y==0)
                {
                    flag=1;
                    break;

                }
            }
            else y=k;


    }
      if(flag==1) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;

}