#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,count=0;
    cin>>x>>y;
    for(int i=1;i<=x;i++)
    {
        if(i%2==0)
        {
            count++;
            if(count%2!=0)
            {
                for(int j=1;j<y;j++) cout<<".";
               cout<<"#"<<endl;
            }
            else{
                    cout<<"#";
                for(int j=1;j<y;j++) cout<<".";
            cout<<endl;
            }

        }
        else {
            for(int j=1;j<=y;j++) cout<<"#";
            cout<<endl;
        }
    }
}