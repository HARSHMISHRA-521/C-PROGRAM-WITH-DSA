#include <stdio.h>
#include <stdlib.h>

int visited[7] = {0, 0, 0, 0, 0, 0, 0};
int A[7][7] = {
    {0, 1, 1, 1, 0, 0, 0},
    {1, 0, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0},
    {1, 0, 1, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 1},
    {0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 1, 0, 0}};

void dfs(int i)
{
    printf("%d ", i);
    visited[i] = 1;
    for (int j = 0; j < 7; j++)
    {
        if (A[i][j] == 1 && !visited[j])    //or we can even write (visited[j]==0)both are same
        {
            dfs(j);
        }
    }
}

int main()
{
    // dfs implelementation
    dfs(4);
    return 0;
}