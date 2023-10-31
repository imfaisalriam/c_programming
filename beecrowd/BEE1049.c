#include<stdio.h>
#include<string.h>
int main()
{
    char identifier1[50];
    char identifier2[50];
    char identifier3[50];
    scanf("%s %s %s",identifier1,identifier2,identifier3);

    if(strcmp(identifier1, "vertebrado") == 0)
    {
        if(strcmp(identifier2, "ave") == 0)
        {
            if(strcmp(identifier3, "carnivoro") == 0)
            {
                printf("aguia\n");
            }else
            {
                printf("pomba\n");
            }
        }else
        {
            if(strcmp(identifier3, "onivoro") == 0)
            {
                printf("homem\n");
            }else
            {
                printf("vaca\n");
            }
        }
    }else
    {
        if(strcmp(identifier2, "inseto") == 0)
        {
            if(strcmp(identifier3, "hematofago") == 0)
            {
                printf("pulga\n");
            }else
            {
                printf("lagarta\n");
            }
        }else
        {
            if(strcmp(identifier3, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }else
            {
                printf("minhoca\n");
            }
        }
    }

}