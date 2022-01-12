#include<iostream>
using namespace std;
class window{//设置一个窗口类
public:
    int x1,x2,y1,y2;//保存每个窗口的顶点
    int num;//表示第几个窗口
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
    for(int i=1;i<=n;i++)//初始化每层的窗口顶点
    {
        cin>>x1>>y1>>x2>>y2;
        w[i].win(x1,y1,x2,y2,i);
    }
    for(int j=1;j<=m;j++)
    {
        bool flag=0;
        int x,y;
        cin>>x>>y;
        for(int k=n;k>=1;k--)//从最顶层的窗口开始找起
        {
            if(w[k].x1<=x&&w[k].x2>=x&&w[k].y1<=y&&w[k].y2>=y)
            {
                flag=1;//符合条件flag=1,顶点存在于窗口之中
                cout<<w[k].num<<endl;//输出该窗口的编号
                window t = w[k];
                for(int i=k;i<n;i++)//将该窗口置于顶层
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
		bool flag= false;//标志是否找得到
		int x,y;
		cin>>x>>y;
		for(int j = n; j >= 1; j--){
			if(window[j].x1 <= x && window[j].x2 >= x && window[j].y1 <= y && window[j].y2 >= y){
				flag = true;
				cout<<window[j].number<<endl;
				//把当前窗口置顶
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

