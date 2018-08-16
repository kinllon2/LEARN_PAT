//#include<stdio.h>
//#include<iostream>
//#include<string.h>
//#include<math.h>
//#include<algorithm>
//#include<queue>
//#include<stack>
//#include<set>
//#include<vector>
//#include<map>
//#define ll long long
//#define pi acos(-1)
//#define inf 0x3f3f3f3f
//#define lson l,mid,rt<<1
//#define rson mid+1,r,rt<<1|1
//#define rep(i,x,n) for(int i=x;i<n;i++)
//#define per(i,n,x) for(int i=n;i>=x;i--)
//using namespace std;
//typedef pair<int, int>P;
//const int MAXN = 100010;
//int gcd(int a, int b) { return b ? gcd(b, a%b) : a; }
//int pre[505], dis[505], a[505], book[505], path[505], help[505], cnt;
//int n, m, s, t;
//struct node {
//	int v, w, next;
//}mp[MAXN << 1];
//void init()
//{
//	memset(pre, -1, sizeof(pre));
//	cnt = 0;
//}
//void add(int u, int v, int w)
//{
//	mp[cnt].v = v;
//	mp[cnt].w = w;
//	mp[cnt].next = pre[u];
//	pre[u] = cnt++;
//}
//void dijkstra()
//{
//	memset(dis, inf, sizeof(dis));
//	dis[s] = 0;
//	path[s] = 1;
//	rep(i, 0, n)
//	{
//		int u, temp = inf;
//		rep(j, 0, n)
//		{
//			if (dis[j] < temp && !book[j])
//			{
//				temp = dis[j];
//				u = j;
//			}
//		}
//		book[u] = 1;
//		for (int j = pre[u]; j != -1; j = mp[j].next)
//		{
//			int v = mp[j].v;
//			if (dis[v] > dis[u] + mp[j].w)
//			{
//				dis[v] = dis[u] + mp[j].w;
//				path[v] = path[u];
//				help[v] = help[u] + a[v];
//			}
//			else if (dis[v] == dis[u] + mp[j].w)
//			{
//				path[v] += path[u];
//				help[v] = max(help[v], help[u] + a[v]);
//			}
//		}
//	}
//}
//int main()
//{
//	int u, v, w;
//	init();
//	cin >> n >> m >> s >> t;
//	rep(i, 0, n)
//		cin >> a[i], help[i] = a[i];
//	rep(i, 0, m)
//	{
//		cin >> u >> v >> w;
//		add(u, v, w);
//		add(v, u, w);
//	}
//	dijkstra();
//	printf("%d %d", path[t], help[t]);
//	return 0;
//}