#include <stdio.h>
#include <stdlib.h>
#define SIZE 9

struct node {
int data;
struct node *next;
};

int main() {
int arr[SIZE] = {45, 32, 64, 15, 48, 51, 19, 21, 58};
struct node *sarr[10] = {NULL}; 

for (int i = 0; i < SIZE; i++) {
int j = arr[i] / 10;      
struct node *newnode = (struct node *)malloc(sizeof(struct node));
newnode->data = arr[i];
newnode->next = NULL;

if (sarr[j] == NULL || arr[i] < sarr[j]->data) {
newnode->next = sarr[j];
sarr[j] = newnode;
} 
else {
struct node *temp = sarr[j];
while (temp->next != NULL && temp->next->data < arr[i]) {
temp = temp->next;
}
newnode->next = temp->next;
temp->next = newnode;
}
}

for (int i = 0; i < 10; i++) {
struct node *temp = sarr[i];
while (temp != NULL) {
printf("%d ", temp->data);
temp = temp->next;
}
}
}


