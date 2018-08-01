#include<iostream>
#include<vector>

using namespace std;
vector<int> VecInt;

void sort1()
{
	int Slength = VecInt.size();
	int Index = Slength - 1;
	int sum = 0;
	for (int i = 0; i < Index; i++)
	{
		for (int j = 0; j < Index - i; j++)
		{
			if (VecInt[j] > VecInt[j + 1])
			{
				int temp = VecInt[j + 1];
				VecInt[j + 1] = VecInt[j];
				VecInt[j] = temp;
			}
		}
	}

}




int main()
{

	//存入需要排序的数据
	
	int num = 0;
	while (cin.get() != '\n')
	{
		cin.unget();
		cin >> num;
		VecInt.push_back(num);
	}

	sort1();
	
   	return 0;
}