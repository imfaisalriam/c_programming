/*
============================================================================================================
                                       Author: Faisal Ahmed Riam
                             Dipertment of Computer Science and Engineering,
                    Mawlana Bhasani Science and Technology University,Tangail,Bangladesh.
============================================================================================================
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int count_up=0,count_lw=0;

    for (int i = 0; i < strlen(s) ; i++)
    {
        if (s[i]>='a'&&s[i]<='z')
        {
            count_lw++;
        }else
        {
            count_up++;
        }
        
    }

    if (count_lw>=count_up)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            s[i]=tolower(s[i]);
        }
        printf("%s",s);
    }else if (count_lw<count_up)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            s[i]=toupper(s[i]);
        }
        printf("%s",s);
    }
    return 0;
}