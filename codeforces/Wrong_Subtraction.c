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
    int num,time;
    scanf("%d %d",&num,&time);

    for (int i = 0; i < time; i++)
    {
        if (num%10!=0)
        {
            num-= 1;
        }else
        {
            num=num/10;
        }
        
    }
    printf("%d",num);
    


    return 0;
}