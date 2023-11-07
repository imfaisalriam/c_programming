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
    int year;
    scanf("%d",&year);
    
    while (1)
    {
        year++;
        int num[10]={0};
        int temp=year;
        int count=1;

        while (temp>0)
        {
            int digit = temp%10;
            if (num[digit]>0)
            {
                count=0;
                break;
            }
            num[digit]=1;
            temp=temp/10;
            
        }

        if (count)
        {
            printf("%d",year);
            break;
        }
        
        
    }
    


    return 0;
}