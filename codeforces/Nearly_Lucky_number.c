/*
============================================================================================================
                                       Author: Faisal Ahmed Riam
                             Dipertment of Computer Science and Engineering,
                    Mawlana Bhasani Science and Technology University,Tangail,Bangladesh.
============================================================================================================
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char number[1*10^3];
    scanf("%s",number);
    for (int i = 0; i < strlen(number); i++)
    {
        if (number[i]=='4'||number[i]=='7')
        {
            count++;
        }
        
    }
    if(count==4||count==7)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
    


    return 0;
}