#include <stdio.h>

#define MAX 100

// function to swap two integers
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// sort jobs by profit (descending)
void sortByProfit(int p[], int d[], int n){
    for(int i = 0; i < n - 1; i++){
        int max = i;
        for(int j = i + 1; j < n; j++){
            if(p[j] > p[max])
                max = j;
        }
        swap(&p[i], &p[max]);
        swap(&d[i], &d[max]);
    }
}

// job sequencing
int jobSequencing(int p[], int d[], int n){
    sortByProfit(p, d, n);

    // find maximum deadline
    int maxDeadline = 0;
    for(int i = 0; i < n; i++){
        if(d[i] > maxDeadline)
            maxDeadline = d[i];
    }

    int slot[MAX] = {0};
    int totalProfit = 0;

    // schedule jobs
    for(int i = 0; i < n; i++){
        for(int j = d[i]; j > 0; j--){
            if(slot[j] == 0){
                slot[j] = 1;
                totalProfit += p[i];
                break;
            }
        }
    }

    return totalProfit;
}

int main(){
    int n;
    printf("Enter number of jobs: ");
    scanf("%d", &n);

    int p[MAX], d[MAX];

    printf("Enter profits:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &p[i]);

    printf("Enter deadlines:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &d[i]);

    int result = jobSequencing(p, d, n);
    printf("Maximum Profit = %d\n", result);

    return 0;
}