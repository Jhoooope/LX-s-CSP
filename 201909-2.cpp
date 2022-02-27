#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//几棵树 
	int m,sum=0,x,c,D=0,E=0;//m输入操作次数及初始苹果数，sum剩余苹果总数，x每次输入的摘除果数或者总果数，D为掉果树数,E为 连续3棵果树都掉的组数 
	cin>>n;
	int d[n]={0};//记录掉果的的果树标号
	for(int i=0;i<n;i++)
	{
		cin>>m;
		c=0;
		for(int j=0;j<m;j++)
		{
			cin>>x;
			if(x>0)
			{
				if(x<c)
				{
					d[i]=1;
				}
				c=x;
			}
			else
			{
				c+=x;
			}
		}
		sum+=c;
	 } 
	 for(int i=0;i<n;i++)
	 {
	 	if(d[i]==1)D++;
	 	if(d[i]==1&&d[(i+1)%n]==1&&d[(i+2)%n]==1)
	 	{
	 		E++;
		 }
	 }
	 cout<<sum<<" "<<D<<" "<<E;
	 return 0;
}
