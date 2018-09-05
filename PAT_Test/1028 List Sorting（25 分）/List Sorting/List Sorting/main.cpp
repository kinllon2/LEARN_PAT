#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

int N, C;
struct node
{
	int id;
	char name[40];
	int score;
}tempstudent;


int cmp(node a,node b)
{
	if(C==1)
	{
		return a.id < b.id;
	}
	else if (C == 2) 
	{
		if (strcmp(a.name, b.name) == 0) return a.id < b.id;
		return strcmp(a.name, b.name) <= 0;
	}
	else
	{
		if (a.score == b.score) return a.id < b.id;
		return a.score <= b.score;
	}
}

int main()
{
	vector<node> list;
	
	cin >> N >> C;
	for(int i=0;i<N;i++)
	{
		cin >> tempstudent.id >> tempstudent.name >> tempstudent.score;
		list.push_back(tempstudent);
	}
	sort(list.begin(), list.end(),cmp);

	for (int i = 0; i < N; i++)
		printf("%06d %s %d\n", list[i].id, list[i].name, list[i].score);
	return 0;
}