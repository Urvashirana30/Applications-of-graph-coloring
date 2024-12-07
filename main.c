#include <stdio.h>
#include <stdlib.h>

int graphColoring(int graph[][5], int numVertices, int m) {
    int color[numVertices];
    for (int i = 0; i < numVertices; i++) {
        color[i] = -1;
    }

    color[0] = 0;

    for (int v = 1; v < numVertices; v++) {
        int available[m];
        for (int i = 0; i < m; i++) {
            available[i] = 1;
        }

        for (int i = 0; i < numVertices; i++) {
            if (graph[v][i] == 1 && color[i] != -1) {
                available[color[i]] = 0;
            }
        }

        int c;
        for (c = 0; c < m; c++) {
            if (available[c] == 1) {
                break;
            }
        }

        color[v] = c;
    }

    printf("Vertex\tColor\n");
    for (int i = 0; i < numVertices; i++) {
        printf("%d\t%d\n", i, color[i]);
    }

    return 0;
}

int main() {
    int numVertices, numEdges;

    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);

    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);

    int graph[numVertices][numVertices];
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            graph[i][j] = 0;
        }
    }

    printf("Enter the edges (pairs of vertices that are connected):\n");
    for (int i = 0; i < numEdges; i++) {
        int u, v;
        printf("Enter edge %d (format: u v): ", i + 1);
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    int m;
    printf("Enter the number of colors (resources/time slots): ");
    scanf("%d", &m);

    graphColoring(graph, numVertices, m);

    return 0;
}
