#include<bits/stdc++.h>
using namespace std;
const int maxx=1000010;
int a[maxx];
int main()
{
	int n,x,max,min;
	double mid;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	max=a[n-1];
	min=a[0];
	int flag=(n%2);
	if(flag==0)
	{
		int t=0;
		for(int i=(n/2)-1;i<=(n/2);i++)
		{
			t+=a[i];
		}
		mid=(double)t/2;
	}
	else
	{
		int t;
		t=(n/2);
		mid=a[t];
	}
	cout<<max<<" "<<mid<<" "<<min;
	return 0;
}
