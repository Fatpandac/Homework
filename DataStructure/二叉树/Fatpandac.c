#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10

typedef struct tnode
{
    char data;
    struct tnode *lchild,*rchild;
}BTNode;

void CreatBTree(BTNode *binaryTree,char *content)
{
    BTNode *binaryTreeStack[MAXSIZE],*pBinaryTree = binaryTree;
    int top = -1,key = 0;
    pBinaryTree->data = *content;
    while(*++content != '\0')
    {
        switch (*content)
        {
        case '(':
            binaryTreeStack[++top] = pBinaryTree;
            key = 1;
            break;
        case ')':
            top--;
            break;
        case ',':
            key = 0;
            break;
        default:
            pBinaryTree = (BTNode *) malloc(sizeof(BTNode));
            pBinaryTree->data = *content;
            pBinaryTree->lchild = pBinaryTree->rchild = NULL;
            key ? (binaryTreeStack[top]->lchild = pBinaryTree) : (binaryTreeStack[top]->rchild = pBinaryTree);
        }
    }
}

void PreOrder(BTNode *binaryTree)
{
    if (binaryTree != NULL)
    {
        printf("%c ",binaryTree->data);
        PreOrder(binaryTree->lchild);
        PreOrder(binaryTree->rchild);
    }
}

void InOrder(BTNode *binaryTree)
{
   if (binaryTree != NULL)
    {
        InOrder(binaryTree->lchild);
        printf("%c ",binaryTree->data);
        InOrder(binaryTree->rchild);
    }  
}

void PostOrder(BTNode *binaryTree)
{
   if (binaryTree != NULL)
    {
        PostOrder(binaryTree->lchild);
        PostOrder(binaryTree->rchild);
        printf("%c ",binaryTree->data);
    }  
}

void InOrderUnRecursion(BTNode *binaryTree)
{
    BTNode *pBinaryTreeStack[MAXSIZE],*pBinaryTree = binaryTree;
    int top = -1;
    while (NULL != pBinaryTree || top > -1)
    {
        while (NULL != pBinaryTree)
        {
            pBinaryTreeStack[++top] = pBinaryTree;
            pBinaryTree = pBinaryTree->lchild;
        }
        pBinaryTree = pBinaryTreeStack[top--];
        printf("%c ",pBinaryTree->data);
        pBinaryTree = pBinaryTree->rchild;
    }
}

void LevelOrder(BTNode *binaryTree)
{
    BTNode *pBinaryTreeQueue[MAXSIZE],*pBinaryTree = binaryTree;
    int fornt = 0,rear = 0;
    pBinaryTreeQueue[++rear] = pBinaryTree;
    while (fornt != rear)
    {
        fornt = (fornt + 1)%MAXSIZE;
        pBinaryTree = pBinaryTreeQueue[fornt];
        printf("%c ",pBinaryTree->data);
        if (pBinaryTree->lchild != NULL)
        {
            rear = (rear + 1) % MAXSIZE;
            pBinaryTreeQueue[rear] = pBinaryTree->lchild;
        }
        if (pBinaryTree->rchild != NULL)
        {
            rear = (rear +1) % MAXSIZE;
            pBinaryTreeQueue[rear] = pBinaryTree->rchild;
        }
    }
    
}

void OutputLeafNode(BTNode *binaryTree,int *countLeafNode)
{
    if (binaryTree != NULL)
    {
        if ((binaryTree->lchild == NULL) && (binaryTree->rchild == NULL))
        {
            *countLeafNode += 1;
            printf("%c ",binaryTree->data);
        }
        OutputLeafNode(binaryTree->lchild,countLeafNode);
        OutputLeafNode(binaryTree->rchild,countLeafNode);
    }   
}

void CountSingleBranchNode(BTNode *binaryTree,int *countSingleBranchNode)
{
    if (binaryTree != NULL)
    {
        if (((binaryTree->lchild == NULL) && (binaryTree->rchild != NULL)) || ((binaryTree->lchild != NULL) && (binaryTree->rchild == NULL)))
        {
            *countSingleBranchNode += 1;
        }
        CountSingleBranchNode(binaryTree->lchild,countSingleBranchNode);
        CountSingleBranchNode(binaryTree->rchild,countSingleBranchNode);
    }
}

int main()
{
    BTNode binaryTree;
    char content[30] = "A(B(D,E(G,H)),C(,F(K)))";
    int countLeafNode = 0,countSingleBranchNode = 0;
    CreatBTree(&binaryTree,content);
    printf("PreOrder:");
    PreOrder(&binaryTree);
    printf("\nInOrder:");
    InOrder(&binaryTree);
    printf("\nPostOrder:");
    PostOrder(&binaryTree);
    printf("\nInOrderUnRecursion:");
    InOrderUnRecursion(&binaryTree);
    printf("\nLevelOrder:");
    LevelOrder(&binaryTree);
    printf("\nOutputLeafNode:");
    OutputLeafNode(&binaryTree,&countLeafNode);
    printf("\nCountLeafNode: %d",countLeafNode);
    printf("\nCountSingleBranchNode:");
    CountSingleBranchNode(&binaryTree,&countSingleBranchNode);
    printf("%d",countSingleBranchNode);
    return 0;
}
