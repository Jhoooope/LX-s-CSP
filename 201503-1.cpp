#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[1001][1001];
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>a[i][j];
	for(int i=0;i<m;i++){
		
	for(int j=0;j<n;j++){
		cout<<a[j][m-1-i]<<" ";
	}
	cout<<endl;
}
	return 0;
}
