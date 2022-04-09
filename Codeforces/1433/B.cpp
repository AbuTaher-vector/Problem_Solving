#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn tt;
    cin>>tt;
    while(tt--)
    {
        nn x,cnt=0;
        cin>>x;
        nn arr[x+1];
        vector<nn>v;
        for(int i=0;i<x;i++) cin>>arr[i];
        for(int i=0;i<x;i++)
        {
            cnt=0;
            for(int j=i+1;j<x;j++)
            {
                if(arr[i]==1 && arr[j]==0) cnt++;
                else
                    {
                        v.push_back(cnt);
                        break;
                    }
            }
        }
        int sum=0;
        for(int i=0;i<v.size();i++) sum+=v[i];
        cout<<sum<<endl;
    }
}
 