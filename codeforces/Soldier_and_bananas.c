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
    int k,n,w,sum=0;
    scanf("%d %d %d",&k,&n,&w);

    for (int i = 1; i <= w; i++)
    {
        sum+=i*k;
    }
    int borrow=(sum>n) ? sum-n: 0 ;
    printf("%d",borrow);
    


    return 0;
}