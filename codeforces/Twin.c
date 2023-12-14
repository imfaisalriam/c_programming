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
    int n, sum = 0, sum1 = 0, count = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        sum += ar[i];
    }

    int midd = sum / 2;
   // printf("%d\n", midd);

    for (int i = 0; i < n - 1; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            if (ar[i] > ar[k])
            {
                int temp = ar[i];
                ar[i] = ar[k];
                ar[k] = temp;
            }
        }
    }

   /* for (int i = 0; i < n; i++)
    {
        printf("%d", ar[i]);
        ;
    }
    printf("\n");*/
    for (int i = n - 1; i >= 0; i--)
    {
        sum1 += ar[i];
        if (sum1 <= midd)
        {
            count++;
        }
    }

    printf("%d", count + 1);

    return 0;
}