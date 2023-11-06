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
    int count_A=0,count_D=0;
    scanf("%d",&n);
    char game[n];
    scanf("%s",game);
    for (int i = 0; i < n; i++)
    {
        if (game[i]=='A')
        {
            count_A++;
        }else
        {
            count_D++;
        }
        
    }
    if (count_A>count_D)
    {
        printf("Anton");
    }else if(count_A<count_D)
    {
        printf("Danik");
    }else
    {
        printf("Friendship");
    }
    


    return 0;
}