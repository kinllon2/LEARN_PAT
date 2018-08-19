#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
#include <stack>

using namespace std;

char  N1[10];
char  N2[10];
int tag;
long long  radix;
long long sum=0;
int size1;
int size2;
long long targetsum =0;
int targetradix = 0;

int  findminradix(char* N)
{
	int i = 0;
	int minradix = 0;;
	while (N[i] != '\0')
	{
		if ((N[i] - '0') < 10)
		{
			if ((N[i] - '0') > minradix)
				minradix = N[i] - '0';
		}	
		else
		{
			if ((N[i] - 'W') > minradix)
				minradix = N[i] - 'W';
		}
		i++;
	}

	return minradix;
}



int main()
{

	for(int i=0;i<10;i++)
	{
		N1[i] = -1;
		N2[i] = -1;

	}
	size1 = 0;
	size2 = 0;
	

	//input
	cin >> N1 >> N2 >> tag >> radix;

	for(int i=0;i<10;i++)
	{
		if (N1[i] != -1&&N1[i]!='\0')
			size1++;
		if (N2[i] != -1 && N2[i] != '\0')
			size2++;
	}





	if(tag==1)
	{
		int tags = 0;
		int i = 0;
		
		while(N1[i]!='\0'&&size1 >0)
		{
			if ((N1[i] - '0') < 10)
				sum = sum + (N1[i] - '0')*pow(radix, size1-1);
			else
				sum = sum + (N1[i] - 'W')*pow(radix, size1-1);
			size1--;
			i++;
		}


		if(size2==1&&N2[0]=='0')
		{
			cout << 2 << endl;
		}
		else
		{
			for (int targetradix = findminradix(N2) + 1; targetradix <= 1000; targetradix++)
			{
				int j = 0;
				int tempsize2 = size2;
				targetsum = 0;
				while (N2[j] != '\0'&&tempsize2 > 0)
				{
					if ((N2[j] - '0') < 10)
						targetsum = targetsum + (N2[j] - '0')*pow(targetradix, tempsize2 - 1);
					else
						targetsum = targetsum + (N2[j] - 'W')*pow(targetradix, tempsize2 - 1);
					j++;
					tempsize2--;
				}

				if (targetsum == sum)
				{
					tags = targetradix;
					break;
				}


			}
			if (tags != 0)
			{
				cout << tags << endl;
			}
			else
			{
				cout << "Impossible" << endl;
			}
		}
		
		
		
		
	}



	if (tag == 2)
	{
		int tags = 0;
		int i = 0;

		while (N2[i] != '\0'&&size2 > 0)
		{
			if ((N2[i] - '0') < 10)
				sum = sum + (N2[i] - '0')*pow(radix, size2 - 1);
			else
				sum = sum + (N2[i] - 'W')*pow(radix, size2 - 1);
			size2--;
			i++;
		}


		if(size1==1&&N1[0]=='0')
		{
			cout << 2 << endl;
		}
		else
		{
			for (int targetradix = findminradix(N1) + 1; targetradix <= 1000; targetradix++)
			{
				int j = 0;
				int tempsize1 = size1;
				targetsum = 0;
				while (N1[j] != '\0'&&tempsize1 > 0)
				{
					if ((N1[j] - '0') < 10)
						targetsum = targetsum + (N1[j] - '0')*pow(targetradix, tempsize1 - 1);
					else
						targetsum = targetsum + (N1[j] - 'W')*pow(targetradix, tempsize1 - 1);
					j++;
					tempsize1--;
				}

				if (targetsum == sum)
				{
					tags = targetradix;
					break;
				}


			}
			if (tags != 0)
			{
				cout << tags << endl;
			}
			else
			{
				cout << "Impossible" << endl;
			}
		}

		


	}




	

	return 0;
}