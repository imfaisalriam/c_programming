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
    int n,num_in=0,num_out=0;
    scanf("%d",&n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
        if (num[i]>=10&&num[i]<=20)
        {
            num_in++;
        }else
        {
            num_out++;
        }
        
    }
    printf("%d in\n",num_in);
    printf("%d out\n",num_out);
    


    return 0;
}