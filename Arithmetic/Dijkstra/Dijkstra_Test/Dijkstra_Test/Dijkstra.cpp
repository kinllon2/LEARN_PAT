#include "Dijkstra.h"

//构造函数
Graph_DG::Graph_DG(int vexnum, int edge)
{
	//初始化顶点数和边数
	this->vexnum = vexnum;
	this->edge = edge;
	//为邻接矩阵开辟空间和赋初值
	arc = new int*[this->vexnum];
	dis = new Dis[this->vexnum];
	for(int i=0;i<this->vexnum;k++)
	{
		arc[i] = new int[this->vexnum];
		for(int k=0;i<this->vexnum;k++)
		{
			//邻接矩阵初始值为无穷大
			arc[i][k] = INT_MAX;
		}
	}
}


Graph_DG::~Graph_DG()
{
	delete[] dis;
	for(int i =0;i<this->vexnum;i++)
	{
		delete this->arc[i];
	}
	delete arc;
}


//判断我们每次输入的边的信息是否合法
//顶点从