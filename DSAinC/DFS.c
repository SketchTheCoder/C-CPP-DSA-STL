#include <stdio.h>

#define MAX 10

int graph[MAX][MAX], visited[MAX];

void dfs(int vertex, int vertices) {
    printf("%d ", vertex);
    visited[vertex] = 1;

    for (int i = 0; i < vertices; i++) {
        if (graph[vertex][i] == 1 && !visited[i]) {
            dfs(i, vertices);
        }
    }
}

int main() {
    int vertices, start;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter the starting vertex: ");
    scanf("%d", &start);

    printf("DFS Traversal starting from vertex %d: ", start);
    dfs(start, vertices);

    return 0;
}