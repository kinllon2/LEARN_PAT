#include<iostream>
using namespace std;
char test[13] = { '0','1','2','3','4','5','6','7','8','9','A','B','C' };



int main()
{
	int R, G, B;
	cin >> R >> G >> B;

	cout << "#";
	if(R>12)
	{
		cout<<test[R / 13];
		cout<<test[R % 13];
	}
	else
	{
		cout << 0<<test[R];
	}

	if (G>12)
	{
		cout << test[G / 13];
		cout << test[G % 13];
	}
	else
	{
		cout <<0<< test[G];
	}


	if (B>12)
	{
		cout << test[B / 13];
		cout << test[B % 13];
	}
	else
	{
		
		cout << 0<<test[B];
	}


	
	

	return 0;
}