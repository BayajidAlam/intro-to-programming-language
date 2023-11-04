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

  int flag = 1;
  if (row != col)
  {
    flag = 0;
  }

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if(i == j){
        if(A[i][j] != A[0][0]){
          flag = 0;
        }
      }
      else if (A[i][j] != 0)
      {
        flag = 0;
      }
    }
  }

  if (flag == 1)
  {
    printf("Scalar Matrix");
  }
  else
  {
    printf("Not Scalar Matrix");
  }
  return 0;
}