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
    char berland[1000];
    char birland[1000];
    scanf("%s", berland);
    scanf("%s", birland);
    strrev(birland);

    if (strcmp(berland, birland) == 0)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
    

    return 0;
}