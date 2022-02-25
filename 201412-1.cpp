#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[1001],b[1001]={0},count=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)//循环对比 
		{
			if(a[j]==a[i])
			{
				count++;
			}
		}
		b[i]=count;
		count=0;
	}
	for(int i=0;i<n-1;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<b[n-1];
	return 0;
}
