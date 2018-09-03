#include<iostream>
#include<vector>

using namespace std;


int main()
{
	vector<int> store1;
	int N, b;
	cin >> N >> b;
	while (N>=b)
	{
		store1.push_back(N%b);
		N = N / b;
	}
	store1.push_back(N);
	int i = 0;
	int j = store1.size() - 1;
	int result = 0;
	while(i<j)
	{
		if (store1[i] != store1[j])
			result = 1;
		i++;
		j--;
	}
	if (result == 1)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;

	if(store1.size()==1)
	{

		cout << store1.back();
		
	}
	else
	{
		cout << store1.back();
		store1.pop_back();
		while (store1.size() > 0)
		{
			cout <<" "<< store1.back();
			store1.pop_back();
		}
	}

	
		return 0;
}