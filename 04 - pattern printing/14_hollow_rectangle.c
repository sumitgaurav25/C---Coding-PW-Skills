#include<stdio.h>
int main(){
  int rows;
  int cols;
  printf("enter row: ");
  scanf("%d", &rows);

  printf("enter col: ");
  scanf("%d", & cols);

  for(int i = 1; i <= rows; i++){
    if(i == 1 || i == rows){
      for (int i = 1; i <= cols; i++)
      {
        printf("*");
      }
      
    }
    else{
            for (int k = 1; k <= cols; k++)
            {
                if (k == 1 || k == cols)
                {
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            
        }
        printf("\n");
  }

  return 0;
}