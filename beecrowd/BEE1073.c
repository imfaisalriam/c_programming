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
    int N;
    scanf("%d",&N);

    for (int i = 1; i <= N; i++)
    {
        if (i%2==0)
        {
            printf("%d^2 = %d\n",i,i*i);
        }
        
    }
    


    return 0;
}