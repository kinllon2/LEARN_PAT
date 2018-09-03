#include<iostream>
using namespace std;


int main()
{
	int rect[1002][1002];
	int N;
	cin >> N;
	int a, b;
	for(int i=0;i<N;i++)
	{
		cin >> a >> b;
		rect[a][b] = rect[b][a] = 1;
	}
}