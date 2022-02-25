#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,w,s;
	cin>>n;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>w>>s;
		sum+=(w*s);
	}
	if(sum>0)
	{
		cout<<sum;
	}
	else
	{
		cout<<0;
	}
	return 0;
}
