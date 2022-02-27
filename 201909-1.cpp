#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int sum=0,num=0;
	int sum1,x,cmax=0,t;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		sum+=t;
		sum1=0;
		for(int j=0;j<m;j++)
		{
			cin>>x;
			sum-=abs(x);
			sum1+=abs(x);
		}
		if(sum1>cmax)
		{
			cmax=sum1;
			num=i;
		}
		else if(cmax==sum1)
		{
			if(num>i)
			{
				num=i;
			}
		}
	}
	cout<<sum<<" "<<num<<" "<<cmax;
	return 0;
}
