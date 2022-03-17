#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,even,odd,flag,j,sum1,sum2;
    cin>>t;
    vector<int>a;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        flag=0;
        even=0;
        sum1=0,sum2=0;
        for(int i=1;i<=x/2;i++)
        {
            even+=2;
            a.push_back(even);
            sum1+=even;

        }
        j=1;
        for(int i=1;i<=x/2-1;i++)
        {
            a.push_back(j);
            sum2+=j;
            if(i==(x/2)-1)
            {
                  if((sum1-sum2)%2!=0)
                  {
                      a.push_back((sum1-sum2));
                      flag=1;
                  }
            }
            j=j+2;

        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
       if(t>1) while(a.size()!=0) a.erase(a.begin()+0);

    }
}