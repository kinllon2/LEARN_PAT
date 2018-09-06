#include<iostream>
#include<algorithm>
using namespace std;
char pre[1020];
char in[1020];
char  last[1020];
int N = 0;
int test[1002];
void findfirst(int root,int start,int end,int deep)
{
	if (start > end) return;
	int i = start;
	while (i <= end&&in[i] != last[root]) i++;
	test[last[root] - '0'] = deep;
	findfirst(root - (end - i) - 1, start, i - 1,deep+1);
	findfirst(root - 1, i + 1, end,deep+1);
}


int main()
{
	
	cin >> N;
	for(int i=0;i<N;i++)
		cin >> last[i];
	for (int i = 0; i < N; i++)
		cin >> in[i];

	findfirst(N-1,0,N-1,1);

	int number = N;
	for(int i=1;i<=N;i++)
	{
		for(int j=0;j<=1002;j++)
		{
			if (test[j] == i)
			{
				if(number!=N)
				{
					cout << " "<<j;
					number--;
				}
				else
				{
					cout << j;
					number--;
				}
				
			}
			
				
		}
	}

	
	return 0;
}
#include<iostream>