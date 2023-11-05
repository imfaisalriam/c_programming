#include <stdio.h>
#include <string.h>
int main()
{
    char identiti[100];
    scanf("%s", identiti);
    int len = strlen(identiti);
    if (len % 2 != 0)
    {
        printf("CHAT WITH HER!");
    }else
    {
         printf("IGNORE HIM!");
    }

}