#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int K = 0;
	float number[3][2012];
	for(int i=0;i<3;i++)
	{
		for (int j = 0; j < 2012; j++)
		{
				number[i][j] = 0.0f;
		}
	}


	for(int i=0;i<2;i++)
	{
		
		cin >> K;
		int nu = 0;
		float num = 0.0f;
		for(int j=0;j<K;j++)
		{
			cin >> nu >> num;//Ö¸”µºÍ‚S”µ
			number[i][nu] = num;
		}
		
	}

	for(int i=0;i<1006;i++)
	{
		for(int j=0;j<1006;j++)
		{
			number[2][i + j] = number[0][i] * number[1][j]+ number[2][i + j];
		}
		
	}

	int sum = 0;
	for(int i=0;i<2012;i++)
	{
		if (number[2][i] != 0.0f)
			sum++;
	}

	cout << sum;
	for(int i=2011;i>=0;i--)
	{
		if (number[2][i] != 0.0f)
		{
			cout << " " << i << " " << setprecision(1) << std::fixed<< number[2][i];
		}
	}


	return 0;
}