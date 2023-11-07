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
    int n,h;
    int width=0;
    scanf("%d %d",&n,&h);
    int hight[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&hight[i]);
        if (hight[i]>h)
        {
            width+=2;
        }else
        {
            width++;
        }
        
    }

    printf("%d",width);
    



    return 0;
}