//�ļ���������˵��������������Ͷ�������ֵ�Ƿ�Ϸ����� 

#include "Dijkstra_head.h"

//����˵� 
int Graph::Menu()
{
	int i;
	do{
		system("cls");
		cout<<"**********·�ɱ�����ϵͳ�˵�********"<<endl<<endl;
		cout<<"            1.���·�ɱ�            "<<endl;
		cout<<"            2.ɾ����                "<<endl;
		cout<<"            3.��ӱ�                "<<endl;
		cout<<"            4.ɾ������              "<<endl;
		cout<<"            5.��Ӷ���              "<<endl;
		cout<<"            6.�˳�����              "<<endl;	
		cout<<"            ����������ѡ��";
		cin>>i;
		}while(i<1||i>6);
	return i;
}

//������������Ͷ�������ֵ�Ƿ�Ϸ���((Vexnum*(Vexnum - 1)) / 2) < edge
bool Graph::Check(int Vexnum, int edge)
{
    if (Vexnum <= 0 || edge <= 0 || ((Vexnum*(Vexnum - 1)) / 2) < edge)
        return false;
    else
        return true;
}
