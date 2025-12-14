#include <stdio.h>
#define MAX 100
int queue[MAX];
int front = -1, rear = -1;

void enqueue(int v) {
if (rear == MAX - 1)
return;
if (front == -1)
front = 0;
queue[++rear] = v;
}
int dequeue() {
if (front == -1 || front > rear)
return -1;
return queue[front++];
}

void bfs(int graph[MAX][MAX], int n, int start) {
int visited[MAX] = {0};
int v;
enqueue(start);
visited[start] = 1;
printf("BFS Traversal: ");

while (front <= rear) {
v = dequeue();
printf("%d ", v);
for (int i = 0; i < n; i++) {
if (graph[v][i] == 1 && !visited[i]) {
enqueue(i);
visited[i] = 1;
}
}
}
printf("\n");
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
bfs(graph, n, 0);
}
