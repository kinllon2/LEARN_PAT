#include "Dijkstra.h"

//���캯��
Graph_DG::Graph_DG(int vexnum, int edge)
{
	//��ʼ���������ͱ���
	this->vexnum = vexnum;
	this->edge = edge;
	//Ϊ�ڽӾ��󿪱ٿռ�͸���ֵ
	arc = new int*[this->vexnum];
	dis = new Dis[this->vexnum];
	for(int i=0;i<this->vexnum;k++)
	{
		arc[i] = new int[this->vexnum];
		for(int k=0;i<this->vexnum;k++)
		{
			//�ڽӾ����ʼֵΪ�����
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


//�ж�����ÿ������ıߵ���Ϣ�Ƿ�Ϸ�
//�����