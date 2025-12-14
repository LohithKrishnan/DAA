#include <stdio.h>
#define MAX 100

int visited[MAX];

void dfs(int graph[MAX][MAX], int n, int v) {
visited[v] = 1;
printf("%d ", v);

for (int i = 0; i < n; i++) {
if (graph[v][i] == 1 && !visited[i]) {
dfs(graph, n, i);
}
}
}

int main() {
int n = 5;
int graph[MAX][MAX] = {
{0, 1, 1, 0, 0},
{1, 0, 0, 1, 1},
{1, 0, 0, 0, 1},
{0, 1, 0, 0, 0},
{0, 1, 1, 0, 0}
};

dfs(graph, n, 0);
}
