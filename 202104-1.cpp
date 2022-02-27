#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,L,num,t;
	cin>>n>>m>>L;
	num=n*m;
	int a[257]={0};
	for(int i=0;i<num;i++)
	{
		cin>>t;
		a[t]++;
	}
	for(int i=0;i<L-1;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<a[L-1];
	return 0;
}
