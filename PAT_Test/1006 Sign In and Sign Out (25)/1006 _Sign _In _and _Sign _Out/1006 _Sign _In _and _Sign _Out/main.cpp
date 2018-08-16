#include<stdio.h>
#include<iostream>

using namespace std;


int main()
{
	int M;
	cin >> M;
	int shour[205], sminute[205], ssecond[205];
	int ehour[205], eminute[205], esecond[205];

	char str[205][15];
	for(int i=0;i<M;i++)
	{
		cin >> str[i];
		scanf("%2d:%2d:%2d %2d:%2d:%2d", &shour[i], &sminute[i], &ssecond[i], &ehour[i], &eminute[i], &esecond[i]);
	}
	int hour = 24;
	int minute = 59;
	int second = 59;
	int tid = -1;
	for(int i = 0; i<M; i++)
	{
		 if (hour > shour[i])
		{
			hour = shour[i];
			minute = sminute[i];
			second = ssecond[i];
			tid = i;
		}
		 else if(hour ==shour[i])
		 {
			 if (minute > sminute[i])
			 {
				 hour = shour[i];
				 minute = sminute[i];
				 second = ssecond[i];
				 tid = i;
			 }
			 else if (minute == sminute[i])
			 {
				 if (second > ssecond[i])
				 {
					 hour = shour[i];
					 minute = sminute[i];
					 second = ssecond[i];
					 tid = i;
				 }
			 }
		 }

	}


	int uid = -1;
	for (int i = 0; i < M; i++)
	{
		if (hour < ehour[i])
		{
			hour = ehour[i];
			minute = eminute[i];
			second = esecond[i];
			uid = i;
		}
		else if (hour == ehour[i])
		{
			if (minute < eminute[i])
			{
				hour = ehour[i];
				minute = eminute[i];
				second = esecond[i];
				uid = i;
			}
			else if (minute == eminute[i])
			{
				if (second < esecond[i])
				{
					hour = ehour[i];
					minute = eminute[i];
					second = esecond[i];
					uid = i;
				}
			}
		}

	}


	cout << str[tid] << " " << str[uid] << endl;


	return 0;
	
}