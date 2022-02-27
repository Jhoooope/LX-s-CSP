#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};//闰年 
	int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int y,d;
	cin>>y>>d;
	int month=0,day=0;
	if(y%400==0||(y%4==0&&y%100!=0))
	{
		for(int i=0;i<12;i++)// 
		{
			if(d>a[i])
			{
				d-=a[i];
				month=i+1;
			}
			else if(d-a[i]==0)
			{
				month=i+1;
				day=a[i];
				break;
			}
			else
			{
				month=i+1;
				day=d;
				break;
			}
		}
		cout<<month<<endl<<day;
	}
	else
	{
		for(int i=0;i<12;i++)
		{
			if(d>b[i])
			{
				d-=b[i];
				month=i+1;
			}
			else if(d-b[i]==0)
			{
				month=i+1;
				day=b[i];
				break;
			}
			else
			{
				month=i+1;
				day=d;
				break;
			}
		}
		cout<<month<<endl<<day;
	}
	return 0;
}
