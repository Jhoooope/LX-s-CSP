#include<iostream>
using namespace std;
int main()
{
    int N,t,num=0;//num���ڼ����෴������
    cin>>N;
    int a[505];//�����������
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<N-1;i++)//ѭ���������ҳ�a[i]���෴��������num+1������������
    {
        t=a[i];
        for(int j=i+1;j<N;j++)
        {
            if(a[j]==-t)
            {
                num+=1;
            }
        }
    }
    cout<<num;
    return 0;
}
