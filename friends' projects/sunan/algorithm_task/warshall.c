#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node
{
    int vertex;
    int weight;
    struct node *next;
};

struct adj_list
{
    struct node *head;
};

struct graph
{
    int num_vertices;
    struct adj_list *adj_lists;
    int *visited;
};

struct node *new_node(int vertex, int weight)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->vertex = vertex;
    new_node->weight = weight;
    new_node->next = NULL;
    return new_node;
}

struct graph *create_graph(int n)
{
    struct graph *graph = (struct graph *)malloc(sizeof(struct graph));
    graph->num_vertices = n;
    graph->adj_lists = (struct adj_list *)malloc(n * sizeof(struct adj_list));
    graph->visited = (int *)malloc(n * sizeof(int));

    int i;
    for (i = 0; i < n; i++)
    {
        graph->adj_lists[i].head = NULL;
        graph->visited[i] = 0;
    }

    return graph;
}

void add_edge(struct graph *graph, int src, int dest, int weight)
{
    struct node *new_node1 = new_node(dest, weight);
    new_node1->next = graph->adj_lists[src].head;
    graph->adj_lists[src].head = new_node1;
}

void printSolution(int dist[][100], int numVertices)
{
    printf("\nShortest distances between every pair of vertices:\n");
    for (int i = 0; i < numVertices; i++)
    {
        for (int j = 0; j < numVertices; j++)
        {
            if (dist[i][j] == INT_MAX)
                printf("INF\t");
            else
                printf("%d\t", dist[i][j]);
        }
        printf("\n");
    }
}

void floydWarshall(struct graph *graph)
{
    int numVertices = graph->num_vertices;
    int dist[100][100];

    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            dist[i][j] = (i == j) ? 0 : INT_MAX;

    for (int i = 0; i < numVertices; i++)
    {
        struct node *temp = graph->adj_lists[i].head;
        while (temp != NULL)
        {
            dist[i][temp->vertex] = temp->weight;
            temp = temp->next;
        }
    }

    for (int k = 0; k < numVertices; k++)
    {
        for (int i = 0; i < numVertices; i++)
        {
            for (int j = 0; j < numVertices; j++)
            {
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX &&
                    dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    printSolution(dist, numVertices);
}

int main()
{
    struct graph *graph = create_graph(6);

    add_edge(graph, 0, 1, 2);
    add_edge(graph, 0, 2, 4);
    add_edge(graph, 1, 3, 3);
    add_edge(graph, 2, 4, 1);
    add_edge(graph, 3, 5, 2);
    add_edge(graph, 4, 5, 5);

    floydWarshall(graph);

    free(graph->adj_lists);
    free(graph->visited);
    free(graph);

    return 0;
}
