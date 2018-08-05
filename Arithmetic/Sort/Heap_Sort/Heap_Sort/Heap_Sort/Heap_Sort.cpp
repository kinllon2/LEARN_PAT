#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

vector<int> VecInt;



void Swap(vector<int> &VecInt,int i,int j)
{
	int temp = VecInt[i];
	VecInt[i] = VecInt[j];
	VecInt[j] = temp;
}

void Heapify(vector<int> &VecInt, int i, int size)
{
	int left_child = 2 * i + 1;
	int right_child = 2 * i + 2;
	int max = i;
	if(left_child<size&&VecInt[left_child]>VecInt[max])
		max = left_child;
	if (right_child<size&&VecInt[right_child]>VecInt[max])
		max = right_child;
	if (max != i)
	{
		Swap(VecInt,i,max);
		Heapify(VecInt, max, size);
	}
}

int  Build_Heap(vector<int> &VecInt, int n)
{
	int heap_size = n;
	for (int i = heap_size / 2 - 1; i >= 0; i--) // 从每一个非叶结点开始向下进行堆调整
		Heapify(VecInt, i, heap_size);
	return heap_size;
}

void Heap_Sort(vector<int> &VecInt, int n)
{
	int heap_size = Build_Heap(VecInt, n);
	while (heap_size > 1)
	{
		Swap(VecInt, 0, --heap_size);
		Heapify(VecInt, 0, heap_size);
	}
}

int main(void)
{
	int num = 0;
	while (cin.get() != '\n')
	{
		cin.unget();
		cin >> num;
		VecInt.push_back(num);
	}

	int Slength = VecInt.size();

	Heap_Sort(VecInt,Slength);


	return 0;
}