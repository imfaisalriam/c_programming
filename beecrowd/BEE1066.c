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
    int num[5];
    int count_P=0,count_N=0,count_E=0,count_O=0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&num[i]);
        if (num[i]%2==0)
        {
            count_E++;
        }if (num[i]%2!=0)
        {
            count_O++;
        }if (num[i]>0)
        {
            count_P++;
        }if (num[i]<0)
        {
            count_N++;
        }
        
        
    }
    printf("%d valor(es) par(es)\n",count_E);
    printf("%d valor(es) impar(es)\n",count_O);
    printf("%d valor(es) positivo(s)\n",count_P);
    printf("%d valor(es) negativo(s)\n",count_N);
    


    return 0;
}