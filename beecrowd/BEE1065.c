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
    int count=0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&num[i]);
        if (num[i]%2==0)
        {
            count++;
        }
        
    }
    printf("%d valores pares\n",count);
    


    return 0;
}