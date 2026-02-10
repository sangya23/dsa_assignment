#include <stdio.h>
#define MAX 10

int adj[MAX][MAX];
int visited[MAX];
int n;

void bfs(int start) 
{
    int queue[MAX], front = 0, rear = 0, i;
    for (i=0; i<n; i++) visited[i] = 0;
    
    queue[rear++] = start;
    visited[start] = 1;
    
    printf("BFS Traversal: ");
    while (front<rear) {
        int v=queue[front++];
        printf("%d ", v);
        for (i=0; i<n; i++) 
		{
            if (adj[v][i]==1 && visited[i] ==0) 
			{
                queue[rear++]=i;
                visited[i]=1;
            }
        }
    }
    printf("\n");
}

void dfs(int v) 
{
    visited[v]=1;
    printf("%d ", v);
    int i;
    for (i = 0; i < n; i++) 
	{
        if (adj[v][i]==1 && visited[i]==0) dfs(i);
    }
}

void display()
{
	printf("Adjacency Matrix:\n");
	int i, j;
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++) printf("%d ", adj[i][j]);
		printf("\n");
	}
	printf("\n");
}

int main() 
{
    int edges, u, v_edge, start, i, j;
    
    printf("Enter the number of vertices (max %d): ", MAX);
    
    if (scanf("%d", &n)!=1) return 1; 

    for (i=0; i<n; i++) 
	{
        for (j=0; j<n; j++) adj[i][j] = 0;
    }
    
    printf("Enter the number of edges: ");
    if (scanf("%d", &edges)!=1) return 1;
    
    printf("Enter edges (u v) from 0 to %d:\n", n-1);
    for (i=0; i<edges; i++) 
	{
        scanf("%d %d", &u, &v_edge);
        if (u<n && v_edge<n && u>=0 && v_edge>=0) 
		{
            adj[u][v_edge]=1;
            adj[v_edge][u]=1;
        } else {
            printf("Invalid edge (%d %d), ignoring.\n", u, v_edge);
        }
    }
    
    display();
    
    printf("Enter starting vertex (0 to %d): ", n-1);
    scanf("%d", &start);
    
    if (start>=0 && start<n) 
	{
        bfs(start);
        for (i=0; i<n; i++) visited[i] = 0;
        printf("DFS Traversal: ");
        dfs(start);
        printf("\n");
    } 
	else 
	{
        printf("Invalid starting vertex.\n");
    }
    
    return 0;
}
