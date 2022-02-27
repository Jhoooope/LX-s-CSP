#include<bits/stdc++.h>
using namespace std;
class SAve{
	public:
		long long int y;
		long long int r;
		long long int Max;//正确次数 
		void setnum(int y1,int r1)
		{
			y=y1;
			r=r1;
		}
		void setMax(int max)
		{
			Max=max;
		}
};
int main()
{
	long long int m,y,r;
	cin>>m;
	SAve a[m];
	for(int i=0;i<m;i++)
	{
		cin>>y>>r;
		a[i].setnum(y,r);
	}
	long long int max,count=0;
	long long int gmax=-1,gcount=a[0].y;
	for(int i=0;i<m;i++)
	{
		max=a[i].y;
		for(int j=0;j<m;j++){
			if(a[j].y>=max)
		{
			if(a[j].r==1)
			{
				count++;
			}
		}
		else if(a[j].y<max)
		{
			if(a[j].r==0)
			{
				count++;
			}
		}	
		}
		a[i].setMax(count);
		if(count>gmax)
		{
			gmax=a[i].Max;
			gcount=a[i].y;
		}
		else if(count==gmax)
		{
			if(a[i].r>=gcount)
			{
				gcount=a[i].y;
			}
		}
		count=0;
	}
	cout<<gcount;
	return 0;
}
