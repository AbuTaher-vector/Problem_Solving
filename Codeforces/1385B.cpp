#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,x;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n*2;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        while(1)
        {
             for(int i=0;i<n;i++)
             {
            int fact = v[i];
            for(int j=i+1;j<2*n;j++)
            {
                if(fact==v[j])
                {
                    v.erase(v.begin()+j);
                    break;
                }
            }

           }
           if(v.size()==n) break;
        }
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;
    }
}