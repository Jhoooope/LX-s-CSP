#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r,g,y;
	cin>>r>>y>>g;
	cin>>n;
	int f,sum=0,s;
	for(int i=0;i<n;i++)
	{
		cin>>f>>s;
		if(f==0)
		{
			sum+=s;
		}
		else if(f==1)
		{
			sum+=s;
		}
		else if(f==2)
		{
			sum+=s;
			sum+=r;
		}
		else if(f==3)
		{
			continue;
		}
	}
	cout<<sum;
	return 0;
}
