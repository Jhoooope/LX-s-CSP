#include<iostream>
using namespace std;
int n,ans,map[110][110],x1,x2,y1,y2;
int main()
{
	cin>>n;
	for(int k=1;k<=n;k++)
	{
		cin>>x1>>y1>>x2>>y2;
		for(int i=x1+1;i<=x2;i++)
		  for(int j=y1+1;j<=y2;j++)
		  map[i][j]++;
	}
	for(int i=1;i<=101;i++)
	  for(int j=1;j<=101;j++)
	  if(map[i][j])
	  ans++;
	cout<<ans;
	return 0;
}
