#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    char ch;
    nn cnt=0;
    while(scanf("%c",&ch)==1)
    {
         if(ch=='"')
        {
            cnt++;
            if(cnt%2!=0) cout<<"``";
            else cout<<"''";
        }
        else cout<<ch;
    }

}

