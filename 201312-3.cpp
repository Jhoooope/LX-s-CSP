#define __CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,t,max=0,min;
	cin >> n;//������θ���
	vector<int>b;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		if (t > max)//�ȱ������ľ������
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
			if (min > b[j])//�ҳ��������θ�С�ıߣ������������ε�������
			{
				min = b[j];
			}
			if (max < (j - i + 1) * min)//�Ƚ����������ҳ�������
			{
				max = (j - i + 1) * min;
			}
		}
	}
	cout << max;
	return 0;

}