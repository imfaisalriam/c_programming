#include<stdio.h>
int row_swap(int i,int j)
{
    if (j<=3)
            {
            int temp=matrix[i][j+1];
            matrix[i][j+1]=matrix[i][j];
            matrix[i][j]=temp;
            }
            
}
int main()
{
    int matrix[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        
        for (int j = 0; j < 5; j++)
        {
            
        }
        
        
    }
    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}