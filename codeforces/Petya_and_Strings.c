#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main()
{
    

    char str1[100];
    char str2[100];

    scanf("%s", str1);
    scanf("%s", str2);
    for (int i = 0; str1[i] != '\0'; i++) {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }

    if (strcmp(str1, str2) > 0)
    {
        printf("1\n");
    }else if (strcmp(str1, str2) < 0)
    {
        printf("-1\n");
    }else
    {
        printf("0\n");
    }
    

    return 0;
}