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
    int start,end;
    int sum=0;
    scanf("%d %d",&end,&start);
    for (int i = start+1; i<end ; i++)
    {
        if (i%2!=0)
        {
            sum+=i;
        }
        
    }
    printf("%d\n",sum);


    return 0;
}