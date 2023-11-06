/*
============================================================================================================
                                       Author: Faisal Ahmed Riam
                             Dipertment of Computer Science and Engineering,
                    Mawlana Bhasani Science and Technology University,Tangail,Bangladesh.
============================================================================================================
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int step[]={5,4,3,2,1};
    int x,sum=0;
    scanf("%d",&x);
    
    float steps=(float)x/step[0];
    int num_of_step= ceil(steps);
    printf("%d",num_of_step);
    



    return 0;
}