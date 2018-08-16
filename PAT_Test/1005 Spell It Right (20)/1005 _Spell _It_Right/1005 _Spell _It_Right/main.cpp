#include<iostream>
#include<vector>
#include<stack>
using namespace std;
char a[10][10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
stack<int> temp;

int main()
{
	char str[502];
	cin >> str;
	int i = 0;
	int sum = 0;
	while(str[i]!='\0')
	{
		sum += str[i] - '0';
		i++;
	}

	int t1 = sum / 100;
	int t2 = sum % 100 / 10;
	int t3 = sum % 10;
	if (t1 != 0)
		cout << a[t1] << " " << a[t2] << " " << a[t3];
	else
	{
		if (t2 == 0) cout << a[t3];
		else cout<< a[t2] << " " << a[t3];
	}
	

	return 0;
}