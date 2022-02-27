#include<iostream>
#include<cstdio>
#include<queue> 
using namespace std;

const int maxn = 205;
long long n, m, k, r, max1=-1;
bool visit[maxn] = {};//默认值为false，确保刚开始每个节点都没有被走过 

struct node {
    long long x, y, k;
    int step;
    node () { step = k = 0; }//默认k=0 
    node (int x1, int y1, int s1, int k1) {x=x1;y=y1;step=s1;k=k1;}//有参构造函数 
} map[maxn];//用来记录每个节点的信息 



int bfs(int begin, int end)//利用深度优先算法遍历来计算起点到终点
{
	queue<node> Q;
	Q.push(node(map[begin].x, map[begin].y, 0, 0));//起始点入站
	visit[begin] = true;//true说明该节点已经走过来，避免重复节点
	
	
	while (!Q.empty()) 
	{
	 	node s = Q.front();
                Q.pop();//入栈 
        
	 	if (s.x == map[end].x && s.y == map[end].y) return s.step - 1;//求出中转个数 
	 	if (s.k == k) max1=n; // 当前k值一旦到达k时只能在n里面走，不能用map[n]之外的节点了 
	 	else max1=n+m;//当前k值小于原k时就可以在map[n+m]里面走 
	 	
	 	
	 	
	 	for (int i=1;i<= max1;++i) 
		{
            if (visit[i]) continue;//已经走过就不走了 
            if ((map[i].x - s.x)*(map[i].x - s.x) + (map[i].y - s.y)*(map[i].y - s.y) > r*r) continue;//距离不够就不走 
            
            
            visit[i] = true; //距离够了就开始准备走
            
            int kk;
            if(i>n)kk=s.k+1;
            else kk=s.k;//根据当前节点的类型决定是否加k值
            
            Q.push(node(map[i].x, map[i].y, s.step + 1, kk));//走进去,放进队列中
	 	}
	}
}



int main()
{
    cin >> n >> m >> k >> r;
    for (int i = 1; i <= n + m; ++i) 
	{
        cin >> map[i].x >> map[i].y;
    }//初始化输入 
    
    cout << bfs(1, 2);//输入结果 
}

