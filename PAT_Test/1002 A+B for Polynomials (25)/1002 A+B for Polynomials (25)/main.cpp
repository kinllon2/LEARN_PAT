#include <iostream>
#include <iomanip>
#include<cstdio>
#include<map>

using namespace::std;
map<int, float> s;


int main()
{

	//input 


	for (int z = 0; z < 2; z++)
	{
		int K = 0;
		cin >> K;
		for (int i = 0; i < K; i++)
		{
			int index = 0;
			float key = 0.0f;
			cin >> index >> key;
			if (s.count(index) == 0)
				s[index] = key;
			else
				s[index] += key;
		}
	}

	int num = 0;
	for (map<int, float>::const_iterator m_it = s.begin(); m_it != s.end(); m_it++)
	{
		if (m_it->second != 0.0&&m_it->second != -0.0)
			num++;
	}

	cout << num;


	for (map<int, float>::reverse_iterator m_it = s.rbegin(); m_it != s.rend(); m_it++)
	{
		if (m_it->second != 0.0&&m_it->second != -0.0)
			cout << " " << m_it->first << " " << fixed << setprecision(1)<< m_it->second;
	}


	

	return 0;
}