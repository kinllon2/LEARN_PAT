#include <stdlib.h>
#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

vector<int> VecInt;
vector<int> TempVec;


//�ϲ�����
void Merge(vector<int> &vec1,int left,int mid,int right)
{
	int len = right - left+1;
	vector<int> temp;
	int index = 0;
	int i = left;
	int j = mid+1;
	while (i <= mid && j <= right)
	{
		int tempnum = 0;
		tempnum=vec1[i] <= vec1[j] ? vec1[i++] : vec1[j++];
		temp.push_back(tempnum);
	}
	while (i <= mid)
	{
		temp.push_back(vec1[i++]);
	}
	while (j <= right)
	{
		temp.push_back(vec1[j++]);
	}
	for (int k = 0; k < len; k++)
	{
		vec1[left++]=temp[k];
	}


}

//�ݹ鷽��
void MergeSortRecursion(vector<int> &vec1,int left,int right)
{
	if (left >= right)
		return;
	int mid = (left + right) / 2;
	MergeSortRecursion(vec1, left, mid);
	MergeSortRecursion(vec1, mid + 1, right);
	Merge(vec1,left,mid,right);

}

//�ǵݹ鷽��
void MergeSortRecursion()
{
	  
}



int main()
{
	clock_t t =clock();
	//input number
	int num = 0;
	while(cin.get()!='\n')
	{
		cin.unget();
		cin >> num;
		VecInt.push_back(num);
	}
	//�ݹ�ʵ�ֹ鲢�㷨
	MergeSortRecursion(VecInt,0,VecInt.size()-1);

	//�ǵݹ�ʵ�ֹ鲢�㷨
	//clock_t t2 = clock();
	//clock_t t3 = t2 - t;
	return 0;
}