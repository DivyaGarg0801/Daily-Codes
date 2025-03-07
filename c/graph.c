/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int vertexNum;
    struct node * next;
};
struct list
{
    struct node * head;
};
void addnode(struct list *adjlist[],int s,int d)
{
    struct node * src;
    if (adjlist[s]->head==NULL)
    {
        src=(struct node *)malloc(sizeof(struct node));
        src->vertexNum=s;
        src->next=NULL;
        adjlist[s]->head=src;
    }
    struct node *dest=(struct node *)malloc(sizeof(struct node));
    dest->vertexNum=d;
    dest->next=NULL;
    struct node * temp=adjlist[s]->head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=dest;

    // Create a new node for the destination
    struct node *dest = (struct node *)malloc(sizeof(struct node));
    dest->vertexNum = d;
    dest->next = NULL;

    // Insert the new node at the beginning of the list for the source
    if (adjlist[s]->head == NULL) {
        adjlist[s]->head = dest;
    } else {
        dest->next = adjlist[s]->head;
        adjlist[s]->head = dest;
    }
}
void printlist(struct list *adjlist[],int n)
{
    for (int i=0;i<n;i++)
    {
        struct node *p=adjlist[i]->head;
        printf("vertex %d ",i);
        while(p!=NULL)
        {
            printf("->%d ",p->vertexNum);
            p=p->next;
        }
        printf("\n");
    }
}
int main()
{
    int n,m,i,ch,src,des;
    printf("Enter number of nodes");
    scanf("%d",&n);
    printf("Enter number of edges");
    scanf("%d",&m);
    struct list * adjlist[n];
    for(int i=0;i<n;i++)
    {
        adjlist[i]=(struct list *)malloc(sizeof(struct list));
        adjlist[i]->head=NULL;
    }
    do
    {
        printf("enter your choice 1. add node 2. display graph");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("enter source, destination");
                scanf("%d %d",&src,&des);
                addnode(adjlist,src,des);
                addnode(adjlist,des,src);
                break;
            case 2:
                printlist(adjlist,n);
                break;
        }
    } while (ch<3);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
struct edgenode
{
    int dest,weight;
    struct edgenode * next;
};
struct list
{
    struct edgenode * head;
};
void addnode(struct list *adjlist[],int s,int d,int w)
{
    // Create a new node for the destination
    struct edgenode *des = (struct edgenode *)malloc(sizeof(struct edgenode));
    des->dest = d;
    des->weight=w;
    des->next = NULL;
    des->next = adjlist[s]->head;
    adjlist[s]->head = des;

}
void printlist(struct list *adjlist[],int n)
{
    for (int i=0;i<n;i++)
    {
        struct edgenode *p=adjlist[i]->head;
        printf("vertex %d ",i);
        while(p!=NULL)
        {
            printf("->%d ( weight:%d) ",p->dest,p->weight);
            p=p->next;
        }
        printf("\n");
    }
}
int main()
{
    int n,m,i,ch,src,des,w;
    printf("Enter number of nodes");
    scanf("%d",&n);
    printf("Enter number of edges");
    scanf("%d",&m);
    struct list * adjlist[n];
    for(int i=0;i<n;i++)
    {
        adjlist[i]=(struct list *)malloc(sizeof(struct list));
        adjlist[i]->head=NULL;
    }
    do
    {
        printf("enter your choice 1. add node 2. display graph");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("enter source, destination and weight");
                scanf("%d %d %d",&src,&des,&w);
                addnode(adjlist,src,des,w);
                addnode(adjlist,des,src,w);
                break;
            case 2:
                printlist(adjlist,n);
                break;
        }
    } while (ch<3);
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 100
// Structure for the adjacency list node
struct Node
{
    int vertex;
    struct Node *next;
};

// Structure for the adjacency list
struct Graph
{
    int numVertices;
    struct Node *adjLists[MAX];
    bool visited[MAX];
};

// Function to create a graph
struct Graph *createGraph(int vertices)
{
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    for (int i = 0; i < vertices; i++)
    {
        graph->adjLists[i] = NULL;
        graph->visited[i] = false;
    }

    return graph;
}

// Function to add an edge to the graph
void addEdge(struct Graph *graph, int src, int dest)
{
    // Add edge from src to dest
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->vertex = dest;
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;
}

// Queue implementation
struct Queue
{
    int items[MAX];
    int front;
    int rear;
};

// Function to create a queue
struct Queue *createQueue()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = -1;
    q->rear = -1;
    return q;
}

void enqueue(struct Queue *q, int value)
{
    if (q->rear == MAX - 1)
    {
        printf("Queue is full!\n");
        return;
    }
    if (q->front == -1)
    {
        q->front = 0;
    }
    q->items[++q->rear] = value;
}

int dequeue(struct Queue *q)
{
    if (q->rear == -1)
    {
        printf("Queue is empty!\n");
        return -1;
    }
    int item = q->items[q->front];
    if (q->front >= q->rear)
    {
        q->front = q->rear = -1;
    }
    else
    {
        q->front++;
    }
    return item;
}

// BFS function
void bfs(struct Graph *graph, int startVertex)
{
    struct Queue *q = createQueue();
    graph->visited[startVertex] = true;
    enqueue(q, startVertex);

    printf("BFS Traversal: ");
    while (q->rear != -1)
    {
        int currentVertex = dequeue(q);
        printf("%d ", currentVertex);

        struct Node *temp = graph->adjLists[currentVertex];
        while (temp!=NULL)
        {
            int adjVertex = temp->vertex;
            if (graph->visited[adjVertex]==false)
            {
                graph->visited[adjVertex] = true;
                enqueue(q, adjVertex);
            }
            temp = temp->next;
        }
    }
    printf("\n");
}
void dfs(struct Graph* graph, int vertex) 
{
    struct Node* temp = graph->adjLists[vertex];
    graph->visited[vertex] = 1;
    printf("%d ", vertex);
    while (temp != NULL) 
    {
        int connectedVertex = temp->vertex;
        if (graph->visited[connectedVertex]==0) 
        {
            dfs(graph, connectedVertex);
        }
        temp = temp->next;
    }
}

// Main function
int main()
{
    int vertices = 6;
    struct Graph *graph = createGraph(vertices);

    addEdge(graph, 0, 1);
    addEdge(graph, 1,0);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 5);

    //bfs(graph, 0);
    dfs(graph,0);
    return 0;
}
