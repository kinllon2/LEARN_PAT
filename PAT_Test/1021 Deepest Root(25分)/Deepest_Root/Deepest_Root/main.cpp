#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>>  rect;
bool visit[10002];
int comments=0;

void dfs(int rootindex, int level, int &height)
{
	visit[rootindex] = true;
	if (height < level)
	{
		height = level;
	}
	for (int i = 0; i < rect[rootindex].size(); i++)
	{
		int son = rect[rootindex][i];
		if (visit[son] == false)
			dfs(son, level + 1, height);
	}
		

}



int main()
{
	
	int N;
	cin >> N;
	if (N == 1) { printf("1"); return 0; }
	if (N == 0) { printf("0"); return 0; }
	rect.resize(N + 1);
	int a, b;
	for(int i=1;i<N;i++)
	{
		cin >> a >> b;
		rect[a].push_back(b);
		rect[b].push_back(a);
	}

	
	int flag = 0;
	vector<int> store1;
	int flag1 = 0;
	int maxheight=0;
	int minsize = 10002;
	for(int i=1;i<=N;i++)
	{
			int height = 0;
			fill(visit, visit + 10002, false);
			dfs(i, 0, height);
			for(int j=1;j<=N;j++)
			{
				if (visit[j] == false)
				{
					comments++;
					flag1 = 1;
				}
					
			}
			if (comments < minsize&&comments>0)
				minsize = comments;

			if (height > maxheight)
			{
				store1.clear();
				store1.push_back(i);
				maxheight = height;
			}
			else if (height == maxheight)
				store1.push_back(i);
				
	}

	if (flag1)
	{
		printf("Error: %d components", minsize);
	}
	else
	{
		if (store1.size() == 1)
			cout << store1[0];
		else
		{
			cout << store1[0];
			for(int i=1;i<store1.size();i++)
				cout <<"\n"<< store1[i];
		}
			
			
	}


	return 0;
	
}