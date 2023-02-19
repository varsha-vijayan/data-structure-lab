#include <stdio.h>
 
#include <string.h>

  #include <stdbool.h>

  #define ROW 5

  #define COL 5

  int i, j, k;

int is Safe(int M[ ][COL], int row, int col, bool visited[ ][COL]) 
 {

return (row >= 0) && (row < ROW) && 

 (col >= 0) && (col < COL) && 

 (M[row][col] && !visited[row][col]); 
 }


 void DFS(int M[][COL], int row, int col, bool visited[][COL])
 {

static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 };

static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

 visited[row][col] = true;

 for (k = 0; k < 8; ++k)

 if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited))

 DFS(M, row + rowNbr[k], col + colNbr[k], visited);
 }
 int countIslands(int M[ ][COL]) 
 {

bool visited[ROW][COL];

memset(visited, 0, sizeof(visited));

int count = 0;

 for (i = 0; i < ROW; ++i)

 for (j = 0; j < COL; ++j)

 if (M[i][j] && !visited[i][j]) 

  { 

  DFS(M, i, j, visited); 

  ++count; 

  }

  return count;

  }

  int main()
  {

  int M[ ][COL] = { { 1, 1, 0, 0, 0 },

 { 0, 1, 0, 0, 1 },

 { 1, 0, 0, 1, 1 },

  { 0, 0, 0, 0, 0 },

 { 1, 0, 1, 0, 1 }

};

       if(countIslands(M)>1)

  {

  printf("Graph is weakly connected.");

        
  else

 {

 printf("Graph is strongly connected.");

 }

  return 0;

 }
