#include<iostream>
using namespace std;
class window{//����һ��������
public:
    int x1,x2,y1,y2;//����ÿ�����ڵĶ���
    int num;//��ʾ�ڼ�������
void   win(int x11,int y11,int x22,int y22,int n);
};
void   window::win(int x11,int y11,int x22,int y22,int n)
    {
        x1=x11;
        y1=y11;
        x2=y22;
        y2=y22;
        num=n;
    }
int main()
{
    int n,m,x1,x2,y1,y2;
    cin>>n>>m;
    window w[15];
    for(int i=1;i<=n;i++)//��ʼ��ÿ��Ĵ��ڶ���
    {
        cin>>x1>>y1>>x2>>y2;
        w[i].win(x1,y1,x2,y2,i);
    }
    for(int j=1;j<=m;j++)
    {
        bool flag=0;
        int x,y;
        cin>>x>>y;
        for(int k=n;k>=1;k--)//�����Ĵ��ڿ�ʼ����
        {
            if(w[k].x1<=x&&w[k].x2>=x&&w[k].y1<=y&&w[k].y2>=y)
            {
                flag=1;//��������flag=1,��������ڴ���֮��
                cout<<w[k].num<<endl;//����ô��ڵı��
                window t = w[k];
                for(int i=k;i<n;i++)//���ô������ڶ���
                {
                    w[i]=w[i+1];
                }
                w[n]=t;
                break;
            }
        }
        if(!flag){
            cout<<"IGNORED"<<endl;
        }
    }
    return 0;
}
/*#include<iostream>
using namespace std;
struct Window{
	int x1,y1,x2,y2;
	int number;
}window[15];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i = 1; i <= n; i++){
		cin>>window[i].x1>>window[i].y1>>window[i].x2>>window[i].y2;
		window[i].number = i;
	}
	for(int i = 1; i <= m; i++){
		bool flag= false;//��־�Ƿ��ҵõ�
		int x,y;
		cin>>x>>y;
		for(int j = n; j >= 1; j--){
			if(window[j].x1 <= x && window[j].x2 >= x && window[j].y1 <= y && window[j].y2 >= y){
				flag = true;
				cout<<window[j].number<<endl;
				//�ѵ�ǰ�����ö�
				Window w = window[j];
				for(int k = j; k < n; k++){
					window[k] = window[k+1];
				}
				window[n] = w;
				break;
			}
		}
		if(!flag){
			cout<<"IGNORED"<<endl;
		}
	}
	return 0;
}*/

