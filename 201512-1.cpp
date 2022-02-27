#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;//输入字符串 
	int s=str.length(),n,sum=0;
	for(int i=0;i<s;i++)
	{
		n=str[i]-'0';//将每位字符转换为数子 
		sum+=n;
	}
	cout<<sum;
	return 0;
}
