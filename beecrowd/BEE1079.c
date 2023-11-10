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
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        float a,b,c;
        scanf("%f %f %f",&a,&b,&c);
        printf("%.1f\n",(a*2+b*3+c*5)/10);
    }
    


    return 0;
}