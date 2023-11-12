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

    struct node *new_node2 = new_node(src, weight);
    new_node2->next = graph->adj_lists[dest].head;
    graph->adj_lists[dest].head = new_node2;
}

int minDistance(int dist[], int sptSet[], int numVertices)
{
    int min = INT_MAX, min_index;

    for (int v = 0; v < numVertices; v++)
    {
        if (sptSet[v] == 0 && dist[v] <= min)
        {
            min = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

void printSolution(int dist[], int numVertices)
{
    printf("\nVertex   Distance from Source\n");
    for (int i = 0; i < numVertices; i++)
        printf("%d \t\t %d\n", i, dist[i]);
}

void dijkstra(struct graph *graph, int src)
{
    int numVertices = graph->num_vertices;
    int *dist = (int *)malloc(numVertices * sizeof(int));
    int *sptSet = (int *)malloc(numVertices * sizeof(int));

    for (int i = 0; i < numVertices; i++)
    {
        dist[i] = INT_MAX;
        sptSet[i] = 0;
    }

    dist[src] = 0;

    for (int count = 0; count < numVertices - 1; count++)
    {
        int u = minDistance(dist, sptSet, numVertices);

        sptSet[u] = 1;

        struct node *temp = graph->adj_lists[u].head;
        while (temp != NULL)
        {
            int v = temp->vertex;
            if (!sptSet[v] && dist[u] != INT_MAX && dist[u] + temp->weight < dist[v])
            {
                dist[v] = dist[u] + temp->weight;
            }
            temp = temp->next;
        }
    }

    printSolution(dist, numVertices);

    free(dist);
    free(sptSet);
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

    printf("Dijkstra's algorithm starting from vertex 0:");
    dijkstra(graph, 0);

    free(graph->adj_lists);
    free(graph->visited);
    free(graph);

    return 0;
}
