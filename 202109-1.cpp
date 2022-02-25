#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int sum,sum1=0;
	int min=0,max=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>sum;
		min+=sum>sum1?sum:0;
		max+=sum;
		sum1=sum;
	}
	cout<<max<<endl<<min;
	return 0;
}
