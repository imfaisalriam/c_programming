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
    int len = strlen(birland);

    for (int i = 0; i < len/2; i++)
    {
        char temp = birland[i];
        birland[i] = birland[len - 1-i];
        birland[len - 1-i] = temp;
    }

    if (strcmp(berland, birland) == 0)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
    

    return 0;
}