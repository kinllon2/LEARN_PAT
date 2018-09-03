#include<iostream>
#include<vector>

using namespace std;


vector<int> post;
vector<int> inorder;
vector<int> preorder;
void pre(int root, int start, int end, int index) {
	if (start > end) return;
	int i = start;
	while (i < end && inorder[i] != post[root]) i++;
	preorder[index] = post[root];
	pre(root - 1 - end + i, start, i - 1, 2 * index + 1);
	pre(root - 1, i + 1, end, 2 * index + 2);
}
int main()
{
	vector<int> print;
	int N;
	cin >> N;
	for (int i = 0; i < 10300; i++)
		preorder.push_back(0);

	
	for(int i=0;i<N;i++)
	{
		int temp = 0;
		cin >> temp;
		post.push_back(temp);
	}

	for (int i = 0; i<N; i++)
	{
		int temp = 0;
		cin >> temp;
		inorder.push_back(temp);
	}

	pre(N - 1, 0, N - 1, 0);

	for(int i=0;i<10300;i++)
	{
		if (preorder[i] != 0)
			print.push_back(preorder[i]);
		
	}


	if (N == 1)
		cout << print[0];
	else
	{
		cout << print[0];
		for (int i = 1; i < N; i++)
			cout << " " << print[i];
	}



	

	return 0;
	

}