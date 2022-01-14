#include<iostream>
#include<map>
#include<vector>
#include<string>
#include <sstream>
using namespace std;
int alpha[26];//字母带参数为1 不带为-1 不存在为0
map<string,string> mp;
bool isLegalOption(string s){
	if(s[0]!='-'||s.length()>2) return false;//若字符第一位置不为0，或者字符长度大于2，则为非法选项
	int pos=s[1]-'a';//字符选项 -'a' 可以得到该选项在26个字母中的位置
	if((pos<0&&pos>25)||!alpha[pos]) return false;//得到的字符位置不在26个字母内，或者该选项非输入的字母选项，则为非法选项
	return true;
}
bool isLegalPara(string s){
	for( auto e:s){
		if((!islower(e))&&(!isdigit(e))&&e!='-')//islower函数判断是否为小写字母，isdigit函数判断是否为十进制数
			return false;
	}
	return true;
}
int main(int,char**){
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if((i+1)<s.length()&&s[i+1]==':'){//若该字符下一位是 ：，则该字符为带参数选项，且下一位 ：直接跳过
			alpha[s[i++]-'a']=1;
		}else alpha[s[i]-'a']=-1;//其余选项为不带参数和不存在选项
	}
	int n,kase=1;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		mp.clear();//每输入一行命令前，都将mp清除干净
		string line,item;
		getline(cin,line);//得到命令行
		stringstream ss(line);//跳过空格，换行符
		vector<string> v;//保存每一行命令
		while(ss>>item) v.push_back(item);
		cout<<"Case "<<kase++<<":";
		for(int j=1;j<v.size();j++){	//cout<<v[j]<<"***\n";
			if(!isLegalOption(v[j])) break;
			if(alpha[v[j][1]-'a']==1){//第j个选项的第1位选项，例如 -a 中的a ,判断a是否带参数
                if((j+1)>=v.size()||!isLegalPara(v[j+1])) break;//参数位大于整个命令长度，或者参数位不合法，则跳过
				mp[v[j]]=v[j+1];
				j++;
			}else mp[v[j]]=" ";
		}
		map<string,string>::iterator e;
		for(e=mp.begin();e!=mp.end();e++){//基于范围的for循环，
			cout<<" "<<e->first;
			if(e->second!=" ") cout<<" "<<e->second;
		}
		cout<<endl;
	}
	return 0;
}
