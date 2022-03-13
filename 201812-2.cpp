#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int r,y,g;
	cin>>r>>y>>g;
	cin>>n;
	int sum=0,count=0;
	for(int i=0;i<n;i++)
	{
		int k,t;
		cin>>k>>t;
		if(k==0)
		{
			sum+=t;
			count=sum;
		}
		else if(k==1)
		{
			if(count>=t&&count<=(t+y))
			{
				continue;
			}
			else
			{
				sum+=(t-count);
				count=sum;
			}
		}
		else if(k==2)
		{
			if(count>=(t+r)&&count<=(t+r+y))
			{
				continue;
			}
			else
			{
				
			}
		}
	}
}
