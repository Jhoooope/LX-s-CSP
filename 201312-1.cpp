#define __CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n,t;//�����������Ŀ
	cin >> n;
	map<int, int>a;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		a[t]++;//��tֵ���ظ����������һ��tֵ����ȷ����ֵ
	}
	int m=0, count=0;
	map<int, int>::iterator i;//�������������ҳ�����ظ�ֵ
	for (i = a.begin(); i != a.end(); i++)
	{
		if (i->second>count)//��ÿ���ַ��ļ���ֵ��count�Ƚϣ��ҳ����
		{
			m = i->first;
			count = i->second;
		}
		else if (i->second == count)//���ظ��ַ�����ȵļ���ֵ����ѡ���ַ�ֵ��С��
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