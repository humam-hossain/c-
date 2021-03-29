#include <iostream>
#include <cstring>
#include <stdio.h>

void reverse(int from, int to, int *A)
{
    int temp;
    for (from; from < to; from++, to--)
    {
        temp = A[from];
        A[from] = A[to];
        A[to] = temp;
    }
}

int j_findout(int *A, int i, int N)
{
    int j;
    for (j = 0; j < N; j++)
    {
        if (A[j] == i + 1)
            return j;
    }
    return j;
}

int main()
{
    int T = 0;
    scanf("%d", &T);
    int N;
    int A[100];
    int B[100];
    int i, j;
    long cost;
    for (int t = 0; t < T; t++)
    {
        scanf("%d", &N);

        for (int x = 0; x < N; x++)
        {
            fscanf(stdin, "%d", &A[x]);
        }

        cost = 0;
        for (int i = 0; i < N - 1; i++)
        {
            j = j_findout(A, i, N);
            cost = cost + (j - i + 1);
            reverse(i, j, A);
        }
        B[t] = cost;
    }
    for (int ans = 0; ans < T; ans++)
    {
        printf("Case #%d: %d\n", ans + 1, B[ans]);
    }

    return 0;
}
