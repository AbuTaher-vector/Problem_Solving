#include<bits/stdc++.h>
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
}
int code()
{
     int n,m;
       cin>>n>>m;
       int arr[n][m];
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++) cin>>arr[i][j];

       }

       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
                     int cnt=0;
                     if(i-1>=0) cnt++;
                     if(i+1<n) cnt++;
                     if(j-1>=0) cnt++;
                     if(j+1<m) cnt++;

                     if(arr[i][j]>cnt)
                     {
                        cout<<"NO"<<'\n';
                        return 0;
                     }
                     arr[i][j]=cnt;
        }

                 
           
       }
       cout<<"YES"<<'\n';
       for(int i=0;i<n;i++)
       {
          for(int j=0;j<m;j++) cout<<arr[i][j]<<" ";
            cout<<'\n';
       }
       return 0;

}
int main()
{
       setup();
       int t;
       cin>>t;
       while(t--) code();
       
      

}
