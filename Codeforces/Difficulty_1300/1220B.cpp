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
int main()
{
       setup();
       long long int n;
    cin>>n;
 
    long long int i,j,a[n],b[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            long long int x;
            cin>>x;
            b[i][j]=x;
        }
    }
 
    for(i=n-1;i>1;i--){
        a[i]=sqrt((b[0][i]*b[1][i])/b[0][1]);
        a[1]=b[1][i]/a[i];
        a[0]=b[0][i]/a[i];
    }
 
    for(i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<'\n';
}    
