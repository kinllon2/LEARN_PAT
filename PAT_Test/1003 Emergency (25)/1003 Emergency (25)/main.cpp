#include<stdlib.h>
#include<vector>
#include<iostream>
#define MAX 502
using namespace std;

int N, M, C1, C2;
int way[502][502];
int teams[502];
int a, b, c;
void Dijistra(int start);
int pathcount[502];
int amount[502];
int dist[502];

int main()
{
	//输入和初始化
	cin >> N >> M >> C1 >> C2;
	for(int i=0;i<N;i++)
	{
		cin >> teams[i];
		amount[i] = teams[i];
	}

	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
				way[i][j] = MAX;
		}
	}

	for(int i=0;i<M;i++)
	{
		cin >> a >> b >> c;
		way[a][b] = way[b][a] = c;
	}

	Dijistra(C1);

	cout << pathcount[C2] <<" " <<amount[C2] << endl;

	return 0;
}



void Dijistra(int start)
{
	
	int u = 0;
	
	int v[502];

	for(int i=0;i<N;i++)
	{
		dist[i] = way[start][i];
		v[i] = 0;
		pathcount[i] = 1;
		amount[i] = teams[i]+1;
	}
	v[start] = 1;//判断这个点是否已经被加入


	while(1)
	{
		int mindis = MAX;
		for (int i = 0; i < N; i++) {
			if (v[i] == 0&&dist[i] < mindis) {
				mindis = dist[i];
				u = i;
			}
		}
		if (mindis == MAX || u == C2)break;
		v[u] = 1;
		for(int i=0;i<N;i++)
		{
			if (v[i] == 0) {
				if (dist[i] > dist[u] + way[u][i]) {
					dist[i] = dist[u] + way[u][i];
					amount[i] = amount[u] + teams[i];
				}
				else if (dist[i] == dist[u] + way[u][i]) {
					pathcount[i] ++;
					if (amount[i] < amount[u] + teams[i])
						amount[i] = amount[u] + teams[i];
				}
			}
		}

	}
}