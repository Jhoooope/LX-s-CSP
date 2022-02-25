#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,N,sum=0,a,r;
	cin>>n>>N;
	r=N/(n+1);
	int f[N]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		f[a]=i;
	}
	for(int i=1;i<N;i++)
	{
		if(f[i]<f[i-1])
		{
			f[i]=f[i-1];
		}
		sum+=abs(f[i]-i/r);
	}
	cout<<sum;
	return 0;
}
