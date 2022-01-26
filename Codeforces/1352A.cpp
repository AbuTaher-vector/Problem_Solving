#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,cnt;
    vector<int>a;
    cin>>t;
    while(t--)
    {
        cin>>x;
        cnt=0;
        while(x!=0)
        {
            cnt++;
            y=x%10;
            if(cnt==1 && y!=0) a.push_back(y);
            else if(cnt==2 && y!=0) a.push_back(y*10);
            else if(cnt==3 && y!=0) a.push_back(y*100);
            else if(cnt==4 && y!=0) a.push_back(y*1000);
            else if(cnt==5 && y!=0) a.push_back(y*10000);
                    x=x/10;
        }
        cout<<a.size()<<endl;
        for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
        cout<<endl;

        while(a.size()!=0) a.erase(a.begin()+0);

    }
}