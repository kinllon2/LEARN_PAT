#include<iostream>
#include<vector>

using namespace std;
vector<int> VecInt;


//ʹ�ü򵥵�ð������
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


//�Ľ�ð���㷨��һ��ѭ�����߽���ð�ݴ���*����β������
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

	//������Ҫ���������
	
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