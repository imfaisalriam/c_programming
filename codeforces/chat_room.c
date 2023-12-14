/*
============================================================================================================
                                       Author: Faisal Ahmed Riam
                             Dipertment of Computer Science and Engineering,
                    Mawlana Bhasani Science and Technology University,Tangail,Bangladesh.
============================================================================================================
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int count=0;
    char a[100];
    scanf("%s", a);
    int l = strlen(a);

    for (int i = 0; i <l; i++)
    {
        if (a[i]=='l')
        {
            count++;
        }
        
    }
    

    for (int j = 0; j < l; j++)
    {
        if (a[j] == 'h')
        {
            for (int k = 0; k < l; k++)
            {
                a[k] = a[j + k];
            }
            l -= j;
            break;
        }
    }
    printf("%s\n", a);

    for (int i = 0; i < l - 1; i++)
    {
        for (int j = i+1; j < l; j++)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < l; k++)
                {
                    a[k] = a[k + 1];
                }
                l--;
                j--;
            }
        }
    }
    printf("%s\n", a);

   for (int i = 0; i < l-1; i++)
    {
           if (a[i]!='h'&&a[i]!='e'&&a[i]!='l'&&a[i]!='o')
            {
                for (int k = i; k < l; k++)
                {
                    a[k] = a[k + 1];
                }
                l--;
                i--;
            }
       
    }
    printf("%s\n", a);

    for (int i = 0; i < l - 1; i++)
    {
        for (int j = i; j < l; j++)
        {
            if (a[j] == a[j + 1])
            {
                for (int k = j; k < l; k++)
                {
                    a[k] = a[k + 1];
                }
                l--;
                j--;
            }
        }
    }
    
    printf("%s\n", a);
    
    if ((strncmp(a, "helo", 4) == 0)&&count>1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}