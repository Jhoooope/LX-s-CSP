#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string a;//isbn���ַ�����ʽ����
	cin >> a;
	vector<int>b;
	int t,sum=0,k;
	for (int i = 0; i<a.size(); i++)
	{
		if (a[i] == '-')
		{
			b.push_back(-1);//����-����-1��ʾ���������
		}
		else if (a[i] == 'X')
		{
			b.push_back(10);
		}
		else
		{
			t = a[i] - '0';
			b.push_back(t);//���ַ���ת��Ϊ����ѹ��b����
		}
	}
	vector<int>::iterator it;
	for (k=1,it = b.begin(); it != b.end()-1; it++,k++)//vector���������һλ�����������
	{
		if (*it == -1)
		{
			k--;//����������������˵�kҪ��һ
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
		b.pop_back();//�����ɾ�����һλԪ�أ�������ȷ����������
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

