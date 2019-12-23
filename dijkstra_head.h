#ifndef DIJKSTRA_HEAD_H_
#define DIJKSTRA_HEAD_H_
#include<string>
//文件包含记录起点到每个顶点的最短路径的信息结构体以及图类

#include<iostream>
#define MAX_VERNUM 20//最大顶点数
#define MAX_VALUE 999//最大权值
using namespace std;

//记录起点到每个顶点的最短路径的信息
struct Node
{
    string path;                                //路径
    int value;                                  //路径权值
    bool visit;                                 //是否访问过
    Node(){visit = false; value = 0; path = "";}//构造函数：初始化
};

//图类
class Graph
{
public:
    Graph(){}//构造函数
    ~Graph();//析构函数
    bool Check(int Vexnum, int edge);//检查输入的边数与顶点的关系是否合理 
    void Create_graph(int vernum, int edge);//创建图
    void Display_adjmatrix();//输出邻接矩阵
    void Dijkstra(int from);//迪斯拉算法主体求最短路径
    void Display_table(int from);//输出路由表 
    void Add_edge();//添加边
	void Del_edge();//删除边
	void Add_vertex();//添加顶点
	void Del_vertex();//删除顶点
	int Menu();//程序菜单
private:
    int vernum;   //图的顶点个数
    int edge;     //图的边数
    int **adjmatrix;   //邻接矩阵
    Node *node;   //记录各个顶点最短路径的信息
};

#endif

