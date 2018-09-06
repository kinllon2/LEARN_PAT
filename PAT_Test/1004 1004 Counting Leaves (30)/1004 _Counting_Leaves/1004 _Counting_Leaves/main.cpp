#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;
int node[100][100] = { 0 };
int array[100];

int main()
{
	int M, N, ID, K;
	cin >> N >> M;
	int i = 0;
	while(i<M)
	{
		cin >> ID >> K;
		int j = 0;
		while(j<K)
		{
			cin >> node[ID][j];
			j++;
		}
		i++;
	}

}