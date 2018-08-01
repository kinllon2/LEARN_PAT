#include<iostream>
#include<vector>

using namespace std;


int main()
{

	//存入需要排序的数据
	vector<int> VecInt;
	int num = 0;
	while (cin.get() != '\n')
	{
		cin.unget();
		cin >> num;
		VecInt.push_back(num);
	}

	int Slength = VecInt.size();
	int Index = Slength - 1;
	int sum = 0;
	for (int i = 0; i < Index; i++)
	{
		for (int j = 0; j < Index - i; j++)
		{
			if (VecInt[j] > VecInt[j + 1])
			{
				int temp = VecInt[j+1];
				VecInt[j+1] = VecInt[j];
				VecInt[j] = temp;
			}
		}
	}
   	return 0;
}