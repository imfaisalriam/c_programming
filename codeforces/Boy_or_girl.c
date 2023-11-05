#include <stdio.h>
#include <string.h>
int main()
{
    int count=0;
    char identiti[100];
    scanf("%s", identiti);
    int len = strlen(identiti);

    for (int i = 0; i < len-1; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if(identiti[i]==identiti[j])
            {
                count++;
                break;
            }
        }
        
    }
    

    if ((len-(count-1)) % 2 != 0)
    {
        printf("CHAT WITH HER!");
    }else
    {
         printf("IGNORE HIM!");
    }

}