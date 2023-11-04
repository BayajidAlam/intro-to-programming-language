#include <stdio.h>

int main()
{

  int row, col;
  scanf("%d %d", &row, &col);
  int A[row][col];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &A[i][j]);
    }
  }

  int target;
  scanf("%d", &target);
  
  // exact row
  // for(int i = 0; i < col; i++){
  //   printf("%d ",A[target][i]);
  // }

  // exact col
  for (int i = 0; i < row; i++)
  {
    printf("%d\n", A[i][target]);
  }
  return 0;
}