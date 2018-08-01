#include<iostream>
#include<vector>

using namespace std;


int main()
{

	//存入需要排序的数据
	vector<int> VecInt;
	int num = 0;
	while (cin.get() != '\r')
	{
		cin.unget();
		cin >> num;
		VecInt.push_back(num);
	}




	


	return 0;
}