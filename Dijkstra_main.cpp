//�˳���������ָ��·����·�ɱ����ļ�Ϊ������
 
#include "Dijkstra_head.h"

//������
int main(void)
{
    int vernum,edge;
    Graph graph;
    cout << "���������˵Ķ�������ͱ�������" << endl;
    cin >> vernum >> edge;
    while (! graph.Check(vernum, edge))
	{
        cout << "���벻�Ϸ������������룡" << endl;
        cin >> vernum >> edge;
    }
    graph.Create_graph(vernum, edge);
    graph.Display_adjmatrix();
    system("pause");//�����������...

    first:
    switch(graph.Menu())
    {
    	case 1:
    	{
    		system("cls"); //�����Ļ
    		int i;
			cout<<"���������������·�ɱ�r";
			cin>>i; 
			cout<<endl;
			graph.Dijkstra(i);
            graph.Display_table(i);
            graph.Display_adjmatrix();
			system("pause");
			goto first;
		}
		case 2:
    	{
    		system("cls");
    		graph.Del_edge();
			graph.Display_adjmatrix();
			system("pause");
			goto first;
		}
		case 3:
    	{
    		system("cls");
    		graph.Add_edge();
			graph.Display_adjmatrix();
			system("pause");
			goto first;
		}
		case 4:
    	{
    		system("cls");
    		graph.Del_vertex();
			graph.Display_adjmatrix();
			system("pause");
			goto first;
		}
		case 5:
    	{
    		system("cls");
    		graph.Add_vertex();
			graph.Display_adjmatrix();
			system("pause");
			goto first;
		}
	}
    return 0;
}
