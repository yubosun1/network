//�ļ�����ڽӾ����� 

#include "Dijkstra_head.h"

//����ڽӾ���
void Graph::Display_adjmatrix()
{
    cout << "���˵��ڽӾ���Ϊ��" << endl;
    int count_row;
    int count_col;
    for (count_row = 0; count_row < this->vernum; count_row++)
	{
        count_col = 0;
        for (count_col = 0; count_col < this->vernum; count_col++)
		{
            if (adjmatrix[count_row][count_col] == MAX_VALUE)
                cout << "��" << " ";
            else
                cout << adjmatrix[count_row][count_col] << " ";
        }
        cout << endl;
    }
}
