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
    int num,n,sum_C=0,sum_R=0,sum_S=0,sum_T=0;
    scanf("%d",&n);
    char animal;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %c",&num ,&animal);
        sum_T+=num;
        if (animal=='c'||animal=='C')
        {
            sum_C+=num;
        }else if (animal=='R'||animal=='r')
        {
            sum_R+=num;
        }else
        {
            sum_S+=num;
        }  
    }
    float percent_R=((float)sum_R/sum_T)*100;
    float percent_S=((float)sum_S/sum_T)*100;
    float percent_C=((float)sum_C/sum_T)*100;

    printf("Total: %d cobaias\n",sum_T);
    printf("Total de coelhos: %d\n",sum_C);
    printf("Total de ratos: %d\n",sum_R);
    printf("Total de sapos: %d\n",sum_S);
    printf("Percentual de coelhos: %.2f %%\n",percent_C);
    printf("Percentual de ratos: %.2f %%\n",percent_R);
    printf("Percentual de sapos: %.2f %%\n",percent_S);

    


    return 0;
}