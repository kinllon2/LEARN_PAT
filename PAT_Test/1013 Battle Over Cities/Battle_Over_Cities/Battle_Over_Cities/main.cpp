	#include<iostream>
	#include<stdlib.h>
	#include<string.h>
	#include<string.h>
	#include<map>
	#include<vector>
	#define imax 256

	using namespace std;
	bool distarray[1024][1024];
	int visit1[1024];
	int N, M, K;

	void dfs(int node) {
		visit1[node] = true;
		for (int i = 1; i <= N; i++) {
			if (visit1[i] == false && distarray[node][i] == true)
				dfs(i);
		}
	}

	int main()
	{
		
		cin >> N >> M >> K;

		//for (int i = 0; i < N; i++)
		//{
		//	for(int j=0;j<N;j++)
		//	{
		//		distarray[i][j] = false;
		//	}
		//	
		//}

		for (int i = 0; i < M; i++)
		{
			int temp1, temp2;
			cin >> temp1 >> temp2;
			distarray[temp1][temp2] = distarray[temp2][temp1] = true;
		}


		for(int i=0;i<K;i++)
		{
			fill(visit1, visit1 + 1024, false);
			int temp1;
			cin >> temp1;
			int cnt = 0;
			visit1[temp1] = true;
			for (int j = 1; j <= N; j++) {
				if (visit1[j] == false) {
					dfs(j);
					cnt++;
				}
			}
			cout << cnt-1 << endl;
		}


		return 0;
	}