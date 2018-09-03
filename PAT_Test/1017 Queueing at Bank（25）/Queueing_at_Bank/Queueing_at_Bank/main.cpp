#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


struct node
{
	int cometime;
	int lasttime;
};

bool cmp1(node a, node b) {
	return a.cometime < b.cometime;
}
int main()
{
	int N, K;
	cin >> N >> K;
	vector<node> custom;
	for(int i=0;i<N;i++)
	{
		int hh, mm, ss, time;
		scanf_s("%d:%d:%d %d", &hh, &mm, &ss, &time);
		int cometime = hh * 3600 + mm * 60 + ss;
		if (cometime > 61200) continue;
		node tempcustomer = { cometime, time * 60 };
		custom.push_back(tempcustomer);
	}
	sort(custom.begin(), custom.end(), cmp1);
	vector<int> window(K, 28800);
	double result = 0.0;
	for (int i = 0; i < custom.size(); i++)
	{
		int tempindex = 0, minfinish = window[0];
		for (int j = 1; j < K; j++)
		{
			if (minfinish > window[j])
			{
				minfinish = window[j];
				tempindex = j;
			}
		}
		if (window[tempindex] <= custom[i].cometime) {
			window[tempindex] = custom[i].cometime + custom[i].lasttime;
		}
		else {
			result += (window[tempindex] - custom[i].cometime);
			window[tempindex] += custom[i].lasttime;
		}
	}
	 if(custom.size() == 0)
        printf("0.0");
    else
        printf("%.1f", result / 60.0 / custom.size());
	 return 0;
}