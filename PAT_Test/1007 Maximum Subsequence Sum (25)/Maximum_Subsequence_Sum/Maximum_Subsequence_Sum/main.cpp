#include<iostream>

using namespace std;


int main()
{
	int number[100000];
	int K = 0;
	int head = 0;
	int tail = 0;
	int max = -1;
	int num = 0;
	int cha = 2000;
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		cin >> number[i];
	}

	for (int i = 0; i < K; i++)
	{
		if (number[i] < 0)
			num++;
	}


	if (num == K)
	{
		cout << 0 << " " << number[0] << " " << number[K - 1] << endl;
	}
	else
	{
		for (int i = 0; i < K; i++)
		{
			int sum = 0;
			for (int j = i; j < K; j++)
			{
				sum = sum + number[j];
				if (max < sum)
				{
					
						max = sum;
						head = i;
						tail = j;
					

				}


			}
		}



		cout << max << " " << number[head] << " " << number[tail] << endl;
	}

	return 0;
}


//存在最大值是0的情况，因为max初始值为0，所以head和tail不会被替换