#include <stdio.h>
int main()
{
    int row_for_one, col_for_one;
    int middle_row = 2, middle_col = 2;
    int matrix[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] == 1)
            {
                row_for_one = i;
                col_for_one = j;
            }
        }
    }
    int row_diff = middle_row - row_for_one;
    int col_diff = middle_col - col_for_one;
    int total_step = row_diff + col_diff;

    printf("%d", total_step);

    return 0;
}