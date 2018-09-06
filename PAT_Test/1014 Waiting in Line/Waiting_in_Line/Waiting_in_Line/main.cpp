#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<queue>
#include<vector>
using namespace std;
int N, M, K, Q;
vector<int> custom_time;
vector<int> check_custom;
queue<int> Queue_array;

int main()
{
	cin >> N >> M >> K >> Q;
	for(int i=0;i<K;i++)
	{
		int temp;
		cin >> temp;
		custom_time.push_back(temp);
	}

	for(int i=0;i<Q;i++)
	{
		int temp;
		cin >> temp;
		check_custom.push_back(temp);
	}

	for(int i=0;)




	
	return 0;
}