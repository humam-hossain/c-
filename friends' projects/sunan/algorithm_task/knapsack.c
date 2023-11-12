#include <stdio.h>
#include <stdlib.h>

struct item {
    int weight;
    int value;
};

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(struct item items[], int n, int capacity) {
    int i, w;
    int **dp;

    dp = (int **)malloc((n + 1) * sizeof(int *));
    for (i = 0; i <= n; i++) {
        dp[i] = (int *)malloc((capacity + 1) * sizeof(int));
    }

    for (i = 0; i <= n; i++) {
        for (w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (items[i - 1].weight <= w) {
                dp[i][w] = max(items[i - 1].value + dp[i - 1][w - items[i - 1].weight], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    int result = dp[n][capacity];

    for (i = 0; i <= n; i++) {
        free(dp[i]);
    }
    free(dp);

    return result;
}

int main() {
    int n, capacity;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    struct item *items = (struct item *)malloc(n * sizeof(struct item));

    printf("Enter weight value of items:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &items[i].weight);
        scanf("%d", &items[i].value);
    }

    printf("Enter the knapsack capacity: ");
    scanf("%d", &capacity);

    int maxValue = knapsack(items, n, capacity);

    printf("Maximum value that can be obtained: %d\n", maxValue);

    free(items);

    return 0;
}
