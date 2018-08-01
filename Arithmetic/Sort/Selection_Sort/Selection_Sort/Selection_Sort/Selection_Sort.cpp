#include<stdlib.h>
#include<iostream>
#include<vector>

using namespace std;
vector<int> VecInt;

int main()
{
	while (cin.get() != '\n')
	{
		cin.unget();
		int num = 0;
		cin >> num;
		VecInt.push_back(num);
	}
	int Slength = VecInt.size();
	int Index = Slength - 1;
	int indexnum = 0;

	for (int i = 0; i <= Index; i++)
	{
		int Minber = 100;
		for (int j = i; j <=Index; j++)
		{
			if (VecInt[j] < Minber)
			{
				Minber = VecInt[j];
				indexnum = j;
				
			}
		}
		VecInt[indexnum] = VecInt[i];
		VecInt[i] = Minber;
	}


	return 0;
}

