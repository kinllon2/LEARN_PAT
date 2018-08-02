#include <stdlib.h>
#include<iostream>
#include <vector>

using namespace std;
vector<int> VecInt;
//插排
//时间复杂度  O（n2）

//简单的插入排序
void Sort1()
{
	int slength = VecInt.size();
	if (slength > 1)
	{
		for (int k = 1; k<slength; k++)
		{
			int num = k - 1;
			int key = VecInt[k];
			while (num >= 0 && VecInt[num] > key)
			{
				VecInt[num + 1] = VecInt[num];
				num--;
			}
			VecInt[num + 1] = key;
		}

	}
}

//改进后的插入排序--二分插入排序
void Sort2()
{
	int slength = VecInt.size();
	for (int i = 1; i < slength; i++)
	{
		int get = VecInt[i];
		int left = 0;
		int right = i - 1;
		//从有序集合中找到数字的区间
		while (left <= right)
		{
			int mid = (left + right) / 2;
			if (VecInt[mid] > get)
				right = mid - 1;
			else
				left = mid + 1;
		} 
		//比目标数字大的数字右移，然后替换left指定的位置
		for (int j = i - 1; j >= left; j--)
		{
			VecInt[j + 1] = VecInt[j];
		}
		VecInt[left] = get;
	}

}

//改进后的插入排序--希尔排序（shell sort）
void Sort3()
{
	int Slength = VecInt.size();
	int Index = Slength - 1;
	for (int gap = Index / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i <Slength; i++)
		{
			int j = i;
			while (j - gap >= 0 && VecInt[j] < VecInt[j - gap])
			{
				int temp = VecInt[j-gap];
				VecInt[j - gap] = VecInt[j];
				VecInt[j] = temp;
				j -= gap;
			}
		}
	}
}

int main()
{
	
	while (cin.get() != '\n')
	{
		cin.unget();
		int number = 0;
		cin >> number;
		VecInt.push_back(number);
	}
	
	//Sort1();
	Sort2();
	//Sort3();
	//VecInt.push_back(5);
	//int i =VecInt.size();
	//int j = VecInt[0];
	return 0;
}