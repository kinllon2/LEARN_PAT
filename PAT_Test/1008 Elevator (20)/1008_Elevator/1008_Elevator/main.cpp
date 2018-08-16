#include<iostream>
using namespace std;


int main()
{
	int N = 0;
	int list[108];
	int temp = 0;
	int sum = 0;
	cin >> N;
	for(int i=0;i<N;i++)
	{
		cin >> list[i];
	}

	for(int i=0;i<N;i++)
	{
		int cha = 0;
		cha = list[i] - temp;
		temp = list[i];
		if (cha > 0)
			sum = sum + 6 * cha + 5;
		else if (cha < 0)
			sum = sum + 4 * (-1)*cha + 5;
		else
			sum = sum + 5;
	}

	cout << sum << endl;

	return 0;
}