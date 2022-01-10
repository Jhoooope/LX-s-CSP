#include<iostream>
using namespace std;
int main()
{
    int N,t,num=0;//num用于计算相反数个数
    cin>>N;
    int a[505];//保存非零整数
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<N-1;i++)//循环遍历，找出a[i]的相反数，有则num+1，无则不做操作
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
