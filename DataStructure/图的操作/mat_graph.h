#ifndef MAT_GRAPH
#define MAT_GRAPH

#define MAXSIZE 100

typedef struct vertex
{
    int adjvex;
    char data[10];
}VTpye;

typedef struct graph
{
    int nodes,edges;
    VTpye vexs[MAXSIZE];
    int edgesMatrix[MAXSIZE][MAXSIZE];
}MatGraph;

#endif