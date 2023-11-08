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
    int count=1;
    scanf("%d",&n);
    for (int i = n; count<=6 ; i++)
    {
        if (i%2!=0)
        {
            printf("%d\n",i);
            count++;
        }
        
    }
    


    return 0;
}