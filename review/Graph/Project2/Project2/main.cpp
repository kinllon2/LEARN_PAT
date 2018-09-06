#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int N, M, K;
int vect[1010][1010];
int visit[1010];

void dfs(int node)
{
	visit[node] = 1;
	for (int k = 1; k <= N; k++) {
		if (visit[k] == 0 && vect[node][k] == 1)
			dfs(k);
	}
}



int main()
{
	cin >> N >> M >> K;

	for(int i=0;i<M;i++)
	{
		int a, b;
		scanf_s("%d %d",&a,&b);
		vect[a][b] = vect[b][a] = 1;
	}

	for(int i=0;i<K;i++)
	{
		int temp;
		fill(visit, visit+1010, 0);
		scanf_s("%d", &temp);
		int cnt = 0;
		visit[temp] = 1;
		for (int j = 1; j <= N; j++) {
			if (visit[j] == 0) {
				dfs(j);
				cnt++;
			}
		}

		printf("%d\n", cnt - 1);
	}

	return 0;
}