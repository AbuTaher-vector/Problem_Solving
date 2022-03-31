#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int code()
{
   nn x;
   cin>>x;
   if(x<24)
   {
   	cout<<"NO\n";
   	return 0;
   }
   vector<nn>v;
   vector<nn>q;
   set<nn>s;
   nn k=sqrt(x);
   nn a=2,b=1,c=x;

   while(1)
   {
      if(x%a==0)
      {
      	v.push_back(a);
      	s.insert(a);
      	x/=a;
      	b*=a;

      }
      if(a==k || x==1) break;
      a++;

   }
   if(x!=1)
   {
   	v.push_back(x);
   	s.insert(x);

   } 
   if(s.size()<3)
   {
   	cout<<"NO\n";
   	return 0;
   }
    sort(v.begin(),v.end());
    cout<<"YES\n";
    b=1;
    for(nn i=0;i<v.size();i++)
    {
    	if(v[i]!=v[i+1] &&  q.size()<2)
    	{
    		q.push_back(v[i]);
    		q.push_back(v[i+1]);

    	}
    	b*=v[i];

    }
    b/=q[0];
    b/=q[1];
    cout<<q[0]<<" "<<q[1]<<" "<<b<<"\n";
    return 0;
   


}
int main()
{
	
	nn tt;
	cin>>tt;
	while(tt--) code();
	

	

}