#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,limak=0,bob=0,year=1;;
    cin>>a>>b;
    limak=a,bob=b;
    for(int i=1;;i++)
    {
          limak=limak*3;
          bob=bob*2;
          if(limak>bob) break;
          else year++;
    }
    cout<<year<<endl;
}