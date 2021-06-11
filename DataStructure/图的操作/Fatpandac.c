#include <stdio.h>
#include <stdlib.h>

#include "mat_graph.h"
#include "adj_graph.h"

int visited[MAXSIZE];

void CreatMatGraph(MatGraph *g,int inputGraph[MAXSIZE][MAXSIZE],int inputNodes,int inputEdges)
{
    g->nodes = inputNodes;
    g->edges = inputEdges;
    for (int i = 0; i < g->nodes; i++)
    {
        for (int j = 0; j < g->nodes; j++)
        {
            g->edgesMatrix[i][j] = inputGraph[i][j];
        }
    }
}

void OutputMatGraph(MatGraph g)
{
    for (int i = 0; i < g.nodes; i++)
    {
        for (int j = 0; j < g.nodes; j++)
        {
            printf("%d ",g.edgesMatrix[i][j]);
        }
        printf("\n");
    }
}

void InitVisited(int *visited)
{
    for (int i = 0; i < MAXSIZE; i++)
    {
        visited[i] = 0;
    }
}

void DFSMatrix(MatGraph g,int start)
{
    printf("%d ",start);
    visited[start] = 1;
    for (int i = 0; i < g.nodes; i++)
    {
        if (g.edgesMatrix[start][i] && visited[i] == 0)
        {
            DFSMatrix(g,i);
        }
    }
}

void BFSMatrix(MatGraph g,int start)
{
    visited[start] = 1;
    int Queue[MAXSIZE],rear = 0,fornt = 0;
    rear = (rear = 1) % MAXSIZE;
    Queue[rear] = start;
    printf("%d ",start);
    while (fornt != rear)
    {
        fornt = (fornt + 1) % MAXSIZE;
        start = Queue[fornt];
        for (int i = 0; i < g.nodes; i++)
        {
            if (g.edgesMatrix[start][i] && visited[i] == 0)
            {
                printf("%d ",i);
                visited[i] = 1;
                rear = (rear + 1) % MAXSIZE;
                Queue[rear] = i;
            }
        }
    }
}

void CreatAdjGraph(AdjGraph *g,int inputGraph[][MAXSIZE],int inputNodes,int inputEdges)
{
    ArcNode *pNode;
    g->nodes = inputNodes;
    g->edges = inputEdges;
    for (int i = 0; i < g->nodes; i++)
    {
        g->adjlist[i].firstarc = NULL;
    }
    for (int i = 0; i < g->nodes; i++)
    {
        for (int j = g->nodes - 1; j >= 0; j--)
        {
            if (inputGraph[i][j])
            {
                pNode = (ArcNode *)malloc(sizeof(ArcNode));
                pNode->adjvex = j;
                pNode->weight = inputGraph[i][j];
                pNode->nextarc = g->adjlist[i].firstarc;
                g->adjlist[i].firstarc = pNode;
            }   
        }
    }
}

void OutputAdjGraph(AdjGraph g)
{
    ArcNode *pNode;
    for (int i = 0; i < g.nodes; i++)
    {
        printf("[%2d]",i);
        pNode = g.adjlist[i].firstarc;
        if (pNode != NULL)
        {
            printf("->");
        }
        while (pNode != NULL)
        {
            printf(" %d(%d)",pNode->adjvex,pNode->weight);
            pNode = pNode->nextarc;
        }
        printf("\n");
    }
}

void DFSAdjGraph(AdjGraph g,int start)
{
    ArcNode *pNode;
    printf("%d ",start);
    visited[start] = 1;
    pNode = g.adjlist[start].firstarc;
    while (pNode != NULL)
    {
        start = pNode->adjvex;
        if (!visited[start])
        {
            DFSAdjGraph(g,start);
        }
        pNode = pNode->nextarc;
    }
}

void BFSAdjGraph(AdjGraph g,int start)
{
    int Queue[MAXSIZE],rear = 0,front = 0;
    ArcNode *pNode;
    printf("%d ",start);
    visited[start] = 1;
    rear = (rear = 1) % MAXSIZE;
    Queue[rear] = start;
    while (rear != front)
    {
        front = (front + 1) % MAXSIZE;
        start = Queue[front];
        pNode = g.adjlist[start].firstarc;
        while (pNode != NULL)
        {
            if (!visited[pNode->adjvex])
            {
                printf("%d ",pNode->adjvex);
                visited[pNode->adjvex] = 1;
                rear = (rear + 1) % MAXSIZE;
                Queue[rear] = pNode->adjvex;
            }
            pNode = pNode->nextarc;
        }
    }
}

void AdjToMat(AdjGraph g,MatGraph *G)
{
    ArcNode *pNode;
    for (int i = 0; i < g.nodes; i++)
    {
        for (int j = 0; j < g.nodes; j++)
        {
            G->edgesMatrix[i][j] = 0;
        }        
    }
    for (int i = 0; i < g.nodes; i++)
    {
        pNode = g.adjlist[i].firstarc;
        while (pNode != NULL)
        {
            G->edgesMatrix[i][pNode->adjvex] = pNode->weight;
            pNode = pNode->nextarc;
        }
    }
    G->nodes = g.nodes;
    G->edges = g.edges;
}

void MatToAdj(MatGraph g,AdjGraph *G)
{
    ArcNode *pNode;
    for (int i = 0; i < g.nodes; i++)
    {
        G->adjlist[i].firstarc = NULL;      //Initialization
    }
    for (int i = 0; i < g.nodes; i++)
    {
        for (int j = g.nodes - 1; j >= 0; j--)
        {
            if (g.edgesMatrix[i][j])
            {
                pNode = (ArcNode *)malloc(sizeof(ArcNode));
                pNode->adjvex = j;
                pNode->weight = g.edgesMatrix[i][j];
                pNode->nextarc = G->adjlist[i].firstarc;
                G->adjlist[i].firstarc = pNode;
            }
        }
    }
    G->nodes = g.nodes;
    G->edges = g.edges;
}

char *FromatDisplay(char *formatContent,char content[40])
{
    sprintf(formatContent,"\33[38;2;255;0;0m%s\33[0m",content);
    return formatContent;
}

int main()
{
    int inputGraph[MAXSIZE][MAXSIZE] = {{0,1,0,1,0},
                                        {1,0,1,0,0},
                                        {0,1,0,1,1},
                                        {1,0,1,0,1},
                                        {0,0,1,1,0}};
    int inputNodes = 5,inputEdages = 6;
    char fromatContent[40];
    MatGraph matG;
    printf(FromatDisplay(fromatContent,"MatGraph\n"));
    CreatMatGraph(&matG,inputGraph,inputNodes,inputEdages);
    OutputMatGraph(matG);
    printf(FromatDisplay(fromatContent,"DFS:"));
    InitVisited(visited);
    DFSMatrix(matG,1);
    printf(FromatDisplay(fromatContent,"\nBFS:"));
    InitVisited(visited);
    BFSMatrix(matG,1);
    printf(FromatDisplay(fromatContent,"\nAdjGraph\n"));
    AdjGraph adjG;
    CreatAdjGraph(&adjG,inputGraph,inputNodes,inputEdages);
    OutputAdjGraph(adjG);
    printf(FromatDisplay(fromatContent,"DFS:"));
    InitVisited(visited);
    DFSAdjGraph(adjG,0);
    printf(FromatDisplay(fromatContent,"\nBFS:"));
    InitVisited(visited);
    BFSAdjGraph(adjG,0);
    printf(FromatDisplay(fromatContent,"\nAdjG -> MatG\n"));
    MatGraph toMatG;
    AdjToMat(adjG,&toMatG);
    OutputMatGraph(toMatG);
    printf(FromatDisplay(fromatContent,"MatG -> AdjG\n"));
    AdjGraph toAdjG;
    MatToAdj(matG,&toAdjG);
    OutputAdjGraph(toAdjG);
    return 0;
}