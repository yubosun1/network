//�ļ��������·�ɱ��������� 

#include "Dijkstra_head.h"

//���·�ɱ� 
void Graph::Display_table(int from)
{
    string str;
    str = "r" + to_string(from);//�����ֳ���fromת��Ϊ�ַ���������ֵΪת����ϵ��ַ���
    cout << "·����" << str << "��·�ɱ����£�" << endl;
    for (int i = 0; i < this->vernum; i++)
	{
        if(node[i].value != MAX_VALUE)
        {
			cout << "Ŀ�ĵأ�" << node[i].path[node[i].path.length()-1] << "  ";
			cout << "��һ����" << node[i].path[6] << "  ";
            cout << "Ȩֵ��" << node[i].value << endl;
        }
    }
    cout<<endl;
}

//��������
Graph::~Graph()
{
    delete[] node;//�ͷ�һά����node�ڴ� 
    for (int i = 0; i < MAX_VERNUM; i++)//�ͷŶ�ά����adjmatrix�ڴ�
	{
        delete this->adjmatrix[i];
    }
    delete adjmatrix;
}
