#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[201];
	int n,N,sum=0;
	cin>>n>>N;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=2;i<=n;i++)
	{
		sum+=(a[i]-a[i-1])*(i-1);
	}
	sum+=(N-a[n])*n;
	cout<<sum;
	return 0;
}
