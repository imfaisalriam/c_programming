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
    int n,count=0;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (ar[i]==1)
        {
            count=1;
            break;
        }
        
    }

    if (count)
    {
        printf("HARD");
    }else
    {
        printf("EASY");
    }
    
    
    
    


    return 0;
}