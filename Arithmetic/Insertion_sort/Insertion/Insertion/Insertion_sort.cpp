#include <stdlib.h>
#include<iostream>
#include <vector>

using namespace std;
//≤Â≈≈
// ±º‰∏¥‘”∂»  O£®n2£©
int main()
{
	vector<int> VecInt ;
	while (cin.get() != '\n')
	{
		cin.unget();
		int number = 0;
		cin >> number;
		VecInt.push_back(number);
	}
	
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
	//VecInt.push_back(5);
	//int i =VecInt.size();
	//int j = VecInt[0];
	return 0;
}