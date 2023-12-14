/*
============================================================================================================
                                       Author: Faisal Ahmed Riam
                             Dipertment of Computer Science and Engineering,
                    Mawlana Bhasani Science and Technology University,Tangail,Bangladesh.
============================================================================================================
*/
#include <stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int arr[n][2];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            if ((arr[i][j] + 2) <= arr[i][j + 1])
            {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}