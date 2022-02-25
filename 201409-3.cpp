#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	string str,sb,sc;
	while(cin>>str)
	{
		cin>>x>>y;
		if(x==0)transform(str.begin(),str.end(),str.begin(),::tolower);//tolower转换字母大小写，transform对序列中选中的每个元素做操作 
		for(int i=1;i<=y;i++)
		{
			cin>>sb;
			if(x==0)transform(sb.begin(),sb.end(),sb.begin(),::tolower);
			if(sb.find(str)!=string::npos)cout<<sc<<endl;//npos可以表示string的结束位子，是string::type_size 类型的，也就是find（）返回的类型。find函数在找不到指定值得情况下会返回string::npos 
		}
	}
	return 0;
}
