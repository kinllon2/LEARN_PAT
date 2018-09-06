#include<iostream>
using namespace std;
struct node
{
	int val;
	struct node *left, *right;
};


node *insert(node *root,int val)
{
	
}
int main()
{
	int n, val;
	scanf_s("%d", &n);
	node *root = NULL;
	for(int i=0;i<n;i++)
	{
		scanf_s("%d", &val);
		root = insert(root, val);
	}
	return 0;
}