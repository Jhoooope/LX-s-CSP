#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n;
	int count=0;
	vector<int>a;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());//从小到大排序
	for(int i=1;i<n;i++)
	{
		if(a[i]-a[i-1]==1)//若相邻两数差值为1
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
