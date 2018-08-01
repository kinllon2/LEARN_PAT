#include<iostream>
#include<vector>

using namespace std;
vector<int> VecInt;


//使用简单的冒泡排序
void Sort1()
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


//改进冒泡算法，一次循环两边进行冒泡处理*（鸡尾酒排序）
void Sort2()
{
	int Slength = VecInt.size();
	int Index = Slength - 1;
	int left = 0;
	int right = Index;
	while (left < right)
	{
		for (int i = left; i < right; i++)
		{
			if (VecInt[i] > VecInt[i + 1])
			{
				int temp1 = VecInt[i];
				VecInt[i] = VecInt[i + 1];
				VecInt[i + 1] = temp1;
			}
		}
		right--;
		for (int j = right; j > left; j--)
		{
			if (VecInt[j] < VecInt[j-1])
			{
				int temp2 = VecInt[j-1];
				VecInt[j-1] = VecInt[j];
				VecInt[j] = temp2;
			}
		}
		left++;

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

	//Sort1();
	Sort2();
   	return 0;
}