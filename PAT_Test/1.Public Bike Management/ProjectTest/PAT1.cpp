#include<iostream>
#include<stdlib.h>
#include<string>
#include<istream>
#include<stddef.h>

using namespace std;
#define MAX_NUMBER 505
#define INF  250
#define PH  C_MAX/2

int C_MAX, N, SP, M;
//represent  maxiumum capacity of each station
//represent  total number of stations
//represent  the index of problem station
//represent  the number roads

int bike[MAX_NUMBER];
int dege[MAX_NUMBER][MAX_NUMBER];
int row, col;

void Solvetoresult()
{

}


int main() 
{
	//����������
	cin >> C_MAX >> N >> SP >> M;
	for (int num = 1; num <= N; num++)
	{
		cin >> bike[num];
	}
	//���Ӿ���ĳ�ʼ��������������֮��ľ�������Ϊ���INF
	for (int i = 0; i <= N; i++)
	{
		for (int j = 0; j <= N; j++)
		{
			dege[i][j] = INF;
		}
	}

	for (int k = 0; k < M; k++) {
		int i, j;
		cin >> i >> j;
		cin >> dege[i][j];
		dege[j][i] = dege[i][j];
	}

	Solvetoresult();

	return 0;
}