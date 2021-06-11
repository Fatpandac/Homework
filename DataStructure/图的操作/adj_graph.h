#ifndef ADJ_GRAPH
#define ADJ_GRAPH

#define MAXSIZE 100

typedef struct edgenode
{
    int adjvex;
    int weight;
    struct edgenode *nextarc;
}ArcNode;

typedef struct vexnode
{
    char data[10];
    ArcNode *firstarc;
}VHeadNode;

typedef struct {
    int nodes,edges;
    VHeadNode adjlist[MAXSIZE];
}AdjGraph;

#endif 