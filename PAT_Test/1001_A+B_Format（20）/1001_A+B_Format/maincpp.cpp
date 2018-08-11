#include <stdlib.h>
#include<iostream>
#include<iomanip>

using namespace std;


//-2000000~2000000
int main()
{
	int a, b = 0;
	cin >> a >> b;
	int num = a + b;
	int mark = 0;
	if (num > 0)
		mark = 1;
	else
		mark = -1;

	num = abs(num);
	if (num<1000) 
	{
		cout << mark * num << endl;
	}
	else if (num < 1000000)
	{
		cout << mark * (num / 1000) << "," <<setw(3) << setfill('0')<< (num % 1000) << endl;
	}
	else
	{
		cout << mark * (num / 1000000) << "," <<setw(3) << setfill('0')<< (num % 1000000)/1000 <<","<<setw(3) << setfill('0')<< (num % 1000000) % 1000 << endl;
	}



		return 0;
}