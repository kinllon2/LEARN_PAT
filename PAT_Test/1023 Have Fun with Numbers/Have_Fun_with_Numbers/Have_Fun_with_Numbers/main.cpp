#include<iostream>
#include<string.h>
#include <complex.h>
#include<vector>
using namespace std;



char digit[25];
char digit2[25];
int book[10];
int book2[10];
int Cup = 0;


int main()
{

	cin >> digit;

	int len = strlen(digit);
	for (int i = 0; i<len; i++)
	{
		book[digit[i] - '0']++;
	}
	vector<int> store(len + 1);
	store[0] = 1;
	if (digit[0] >= '5')
	{
		cout << "No" << endl;
		for (int i = len; i > 0; i--)
		{
			if ((digit[i - 1] - '0') * 2 + Cup + '0' > '9')
			{
				store[i] = (digit[i - 1] - '0') * 2 - 10 + Cup;
				Cup = 1;
			}
			else
			{
				store[i] = (digit[i - 1] - '0') * 2 + Cup;
				Cup = 0;

			}
		}
		for (int i = 0; i <= len; i++)
			cout << store[i];

		return 0;
	}

	else
	{
		Cup = 0;
		for (int i = len; i >= 0; i--)
		{
			if ((digit[i - 1] - '0') * 2 + Cup + '0' > '9')
			{
				digit2[i - 1] = (digit[i - 1] - '0') * 2 - 10 + Cup + '0';
				Cup = 1;
			}
			else
			{
				digit2[i - 1] = (digit[i - 1] - '0') * 2 + Cup + '0';
				Cup = 0;
			}

		}
	}
	for (int i = 0; i<len; i++)
	{
		book2[digit2[i] - '0']++;
	}

	int flag = 0;
	for (int i = 0; i<10; i++)
	{
		if (book2[i] != book[i])
			flag = 1;
	}


	if (flag == 0)
	{
		cout << "Yes" << endl;
		for (int i = 0; i < len; i++)
			cout << digit2[i];
	}
	else
	{
		cout << "No" << endl;
		for (int i = 0; i < len; i++)
			cout << digit2[i];
	}




	return 0;
}

