#include <iostream>
#include<iomanip>
using namespace std;

float game[3][3];
char  test[3] = { 'W','T','L' };

float maxbet(float* game)
{
	float max = 0;
	for(int i=0;i<3;i++)
	{
		if (max < game[i])
			max = game[i];
	}
	return max;
}

int maxTest(float* game)
{
	int number = 0;
	float max = 0;
	for (int i = 0; i < 3; i++)
	{
		if (max < game[i])
		{
			max = game[i];
			number = i;
		}
			
	}
	return number;
}



int main()
{
	float max1;
	float max2;
	float max3;

	for(int i=0;i<3;i++)
	{
		cin >> game[i][0] >> game[i][1] >> game[i][2];
	}

	max1 = maxbet(game[0]);
	max2 = maxbet(game[1]);
	max3 = maxbet(game[2]);


	cout << test[maxTest(game[0])] << " " << test[maxTest(game[1])] << " " << test[maxTest(game[2])] << " " << setprecision(2) << std::fixed <<(max1*max2*max3*0.65-1)*2<< endl;
	return 0;
}