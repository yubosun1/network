//�ļ�������ӱߡ����㺯�� 

#include "Dijkstra_head.h"

//��ӱ�
void Graph::Add_edge()
{
	int from, to, value;
	cout << "��������Ҫ��ӵıߣ���ʽ����� �յ� Ȩֵ��";
	cin >> from >> to >> value;
	adjmatrix[from - 1][to - 1] = value;//���ڽӾ����Ӧ�ϵĵ㸳ֵ
    adjmatrix[to - 1][from - 1] = value;
    this->edge++;
}

//��Ӷ���
void Graph::Add_vertex()
{
    int i, e, to, value;
	cout<<"����������ӵĶ���r"<<this->vernum+1<<"���ڵı���"<<endl;
	cin >> e;
	cout<<"����������ÿ���߼���Ȩֵ����ʽ���յ� Ȩֵ��"<<endl; 
	for(i = 0; i < e; i++)
	{
		cin >> to >> value;
		adjmatrix[this->vernum][to-1] = value;
		adjmatrix[to-1][this->vernum] = value;
	}
	this->vernum++;
	this->edge = this->edge + e;
}
