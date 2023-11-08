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
    float num[5];
    int count=0;
    float avg=0,sum=0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%f",&num[i]);
        if (num[i]>0)
        {
            count++;
            sum=sum+num[i];
        }
        
    }
    avg=(float)sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",avg);
    


    return 0;
}