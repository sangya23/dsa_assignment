#include <stdio.h>
#include <limits.h>

#define Max 100

int minDistance(int dist[], int visited[], int V)
{
    int min=INT_MAX, min_index=-1, v;

    for (v=0; v<V; v++)
    {
        if (!visited[v] && dist[v] <= min)
        {
            min=dist[v];
            min_index=v;
        }
    }
    return min_index;
}


void dijkstra(int graph[Max][Max], int V, int src)
{
    int dist[Max];
    int visited[Max];
    int i, count, v;

    for (i=0; i<V; i++)
    {
        dist[i]=INT_MAX;
        visited[i]=0;
    }

    dist[src] = 0;

    for (count=0; count<V - 1; count++)
    {
        int u=minDistance(dist, visited, V);
        visited[u]=1;

        for (v=0; v<V; v++)
        {
            if (!visited[v] && graph[u][v]!=0 && dist[u]!=INT_MAX && dist[u] + graph[u][v]<dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("\nVertex \t Distance from Source\n");
    for (i=0; i<V; i++)
        printf("%d \t %d\n", i, dist[i]);
}

int main()
{
    int V, E;
    int graph[Max][Max];

    printf("Enter number of vertices: ");
    scanf("%d", &V);

    printf("Enter number of edges: ");
    scanf("%d", &E);

	int i,j;
    for (i=0; i<V; i++)
        for (j=0; j<V; j++)
            graph[i][j] = 0;

    printf("Enter edges (source destination weight):\n");

    for (i=0; i<E; i++)
    {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);

        graph[u][v]=w;
        graph[v][u]=w;
    }

    int src;
    printf("Enter source vertex (0 to %d): ", V - 1);
    scanf("%d", &src);

    dijkstra(graph, V, src);

    return 0;
}

