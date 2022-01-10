#define __CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n,t;//输入的数字数目
	cin >> n;
	map<int, int>a;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		a[t]++;//若t值有重复，则在最后一个t值有正确计数值
	}
	int m=0, count=0;
	map<int, int>::iterator i;//迭代器遍历，找出最大重复值
	for (i = a.begin(); i != a.end(); i++)
	{
		if (i->second>count)//用每个字符的计数值与count比较，找出最大
		{
			m = i->first;
			count = i->second;
		}
		else if (i->second == count)//若重复字符有相等的计数值，则选择字符值更小的
		{
			if (i->first < m)
			{
				m = i->first;
			}
		}
	}
	cout << m<<endl;
	return  0;

}