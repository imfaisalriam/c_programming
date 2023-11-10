/*
============================================================================================================
                                       Author: Faisal Ahmed Riam
                             Dipertment of Computer Science and Engineering,
                    Mawlana Bhasani Science and Technology University,Tangail,Bangladesh.
============================================================================================================
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
        if (num[i]!=0&&num[i]%2==0)
        {
            if (num[i]>0)
            {
                printf("EVEN POSITIVE\n");
            }else
            {
                printf("EVEN NEGATIVE\n");
            }
        }else if (num[i]!=0&&num[i]%2!=0)
        {
            if (num[i]>0)
            {
                printf("ODD POSITIVE\n");
            }else
            {
                printf("ODD NEGATIVE\n");
            }
        }else
        {
            printf("NULL\n");
        }
        
        
    }
    



    return 0;
}