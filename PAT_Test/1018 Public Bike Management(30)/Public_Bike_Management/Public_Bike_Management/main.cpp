#include<iostream>
#include<vector>
#include<string>
#define max 502
using namespace std;
void Dijistra(int start);

int row = -1;
int clo = -1;
int Cmax = -1;//小于等于100 maximum capacity of each station
int N = -1;//小于等于500，the total number of stations
int SP = -1;// the index of the problem station  PBMC is represented by the vertex 0
int M = -1;//the number of roads
int rect[502][502];
int bikes[502];
int takenemaber = 0;
int bringnumber = 0;
vector<int> pathid;
string path[502];

struct node
{
	int weight;
	int needbetake;
};
vector<node> station(502);
int main()
{
	cin >> Cmax >> N >> SP >> M;

	for (int i = 1; i <= N; i++)
	{
		cin >> station[i].weight;
		if (station[i].weight > Cmax / 2)
			station[i].needbetake = station[i].weight - Cmax / 2;
		else
			station[i].needbetake = 0;
	}
	for (int i = 0; i <= N; i++)
	{
		for (int j = 0; j <= N; j++)
			rect[i][j] = max;
	}
	for (int i = 0; i<M; i++)
	{
		cin >> row >> clo;
		cin >> rect[row][clo];
		rect[clo][row] = rect[row][clo];
	}


	Dijistra(0);
	cout << takenemaber << " ";

	cout << path[SP];

	cout << " " << bringnumber;

	return 0;
}


void Dijistra(int start)
{

	int v[502];
	int totaltake[502];
	int dist[502];

	for (int i = 0; i <= N; i++)
	{
		path[i] = "0";
	}
	for (int i = 0; i <= N; i++)
	{
		dist[i] = max;
	}
	for (int i = 0; i <= N; i++)
	{
		totaltake[i] = 0;
	}
	for (int i = 0; i <= N; i++)
		v[i] = 0;
	for (int i = 1; i <= N; i++)
	{
		dist[i] = rect[start][i];
		if (dist[i]<max)
		{
			totaltake[i] = totaltake[start] + station[i].needbetake;
			path[i] = path[start] + "->" + to_string(i);
		}

	}
	v[0] = 1;
	while (1)
	{
		int u, minusetime;
		minusetime = max;
		for (int i = 1; i <= N; i++)
		{
			if (v[i] == 0 && dist[i] < minusetime)
			{
				minusetime = dist[i];
				u = i;
			}
		}
		if (minusetime == max || u == SP)break;
		v[u] = 1;
		for (int i = 1; i <= N; i++)
		{
			if (v[i] == 0) {
				if (dist[i] > dist[u] + rect[u][i]) {
					dist[i] = dist[u] + rect[u][i];
					totaltake[i] = totaltake[u] + station[i].needbetake;
					path[i] = path[u] + "->" + to_string(i);
				}
				else if (dist[i] == dist[u] + rect[u][i])
				{
					if (totaltake[i] < totaltake[u] + station[i].needbetake)
					{
						path[i] = path[u] + "->" + to_string(i);
						totaltake[i] = totaltake[u] + station[i].needbetake;
					}

				}
			}
		}

	}

	if (totaltake[SP] < Cmax / 2)
	{
		takenemaber = Cmax / 2 - totaltake[SP];
		bringnumber = 0;
	}
	else
	{
		takenemaber = 0;
		bringnumber = totaltake[SP] - Cmax / 2;
	}

}