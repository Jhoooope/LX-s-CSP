#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string a;//isbn以字符串形式输入
	cin >> a;
	vector<int>b;
	int t,sum=0,k;
	for (int i = 0; i<a.size(); i++)
	{
		if (a[i] == '-')
		{
			b.push_back(-1);//将‘-’以-1表示，方便输出
		}
		else if (a[i] == 'X')
		{
			b.push_back(10);
		}
		else
		{
			t = a[i] - '0';
			b.push_back(t);//将字符串转换为整数压入b容器
		}
	}
	vector<int>::iterator it;
	for (k=1,it = b.begin(); it != b.end()-1; it++,k++)//vector迭代，最后一位数不参与计算
	{
		if (*it == -1)
		{
			k--;//若遇到负数，则相乘的k要减一
			continue;
		}
		else
		{
			sum += (*it) * k;
		}
	}
	if (sum % 11 == *it)
	{
		cout << "Right" ;
		return 0;
	}
	else
	{
		t = sum % 11;
		b.pop_back();//不相等删除最后一位元素，并将正确的余数加入
		b.push_back(t);
		for (it = b.begin(); it != b.end(); it++)
		{
			if (*it == -1)
			{
				cout << "-";
			}
			else if (*it == 10)
			{
				cout << "X";
			}
			else
			{
				cout << *it;
			}
		}
		return 0;
	}
}

