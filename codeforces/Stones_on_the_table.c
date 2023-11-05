/*
===============================================================================
                       Author: Faisal Ahmed Riam
             Dipertment of Computer Science and Engineering,
    Mawlana Bhasani Science and Technology University,Tangil,Bangladesh.
===============================================================================*/
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,n;
    scanf("%d",&n);
    char ston[50];
    scanf("%s",ston);
    for (int i = 0; i < n ; i++)
    {
        if (ston[i]==ston[i+1])
        {
            count++;
        }
        
    }
    printf("%d",count);
    


    return 0;
}