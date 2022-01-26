#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn n,m,cnt=0;
    cin>>n>>m;
     char arr[n+1][m+1];
     vector<char>v;
     nn ar[n+1]={0};
    for(nn i=0;i<n;i++)
    {
        for(nn j=0;j<m;j++) cin>>arr[i][j];
    }
    for(nn j=0;j<m;j++)
    {
        char mx='0';
        for(nn i=0;i<n;i++)
        {

            if(arr[i][j]>mx) mx=arr[i][j];

        }
        v.push_back(mx);
    }
    for(nn j=0;j<m;j++)
    {
        for(nn i=0;i<n;i++)
        {

            if(arr[i][j]==v[j] && ar[i]==0)
            {
                cnt++;
                ar[i]++;

        }

    }
    }
    cout<<cnt<<endl;

}