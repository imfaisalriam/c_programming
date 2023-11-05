#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char capital[1000];
    scanf("%s",capital);
    capital[0]= toupper(capital[0]);

    printf("%s",capital);

}