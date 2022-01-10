#define __CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,t,max=0,min;
	cin >> n;//输入矩形个数
	vector<int>b;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		if (t > max)//先保存最大的矩形面积
		{
			max = t;
		}
		b.push_back(t);
	}
	for (int i = 0; i < n-1; i++)
	{
		min = b[i];
		for (int j = i + 1; j < n; j++)
		{
			if (min > b[j])//找出两个矩形更小的边，计算两个矩形的最大面积
			{
				min = b[j];
			}
			if (max < (j - i + 1) * min)//比较最大面积，找出最大面积
			{
				max = (j - i + 1) * min;
			}
		}
	}
	cout << max;
	return 0;

}