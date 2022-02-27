#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[1001],count=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
		for(int j=1;j<n;j++)
		{
			if(j==n-1)//若判断到最后两个数字相等则先+1 
			{
				if(a[j]==a[j-1])
			{
				count++;
				continue;
			}
			}
			if(a[j]==a[j-1])
			{
				continue;
			}
			else//数字不同+1 
			{
				count++;
			}
		}
	if(a[n-1]==a[n-2])
	{
		cout<<count;
		return 0;
	}
	else
	{
		count++;
		cout<<count;
		return 0;
	}
}
