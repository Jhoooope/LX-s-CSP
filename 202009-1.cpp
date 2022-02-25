#include<bits/stdc++.h>
using namespace std;
const int MAX_INT=0x7fffffff;
int main()
{
	int n,X,Y;
	int x,y,sum=0;
	cin>>n>>X>>Y;
	int a[201],min,minf,j;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y;
		sum=abs((X-x)*(X-x)+(Y-y)*(Y-y));
		a[i]=sum;
	}
	min=a[1];
	minf=1;
	for(int i=1;i<=3;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[j]==-1)
			{
				continue;
			}
			else if(a[j]<min)
			{
				min=a[j];
				minf=j;
			}
		}
		cout<<minf<<endl;
		a[minf]=-1;
		min=MAX_INT;
	}
	return 0;
}
