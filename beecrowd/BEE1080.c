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
    int highest=0,position=0;
    
    for (int i = 1; i <= 100; i++)
    {
        scanf("%d",&n);
        if(n>highest)
        {
            highest=n;
            position=i;
        }
    }
    printf("%d\n%d\n",highest,position);
    



    return 0;
}