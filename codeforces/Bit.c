#include<stdio.h>
#include<string.h>
int main()
{

    int n,x=0;
    scanf("%d",&n);
    char str[5];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",str);
        if (strcmp(str,"++X")==0||strcmp(str,"X++")==0)
        {
            x++;
        }else
        {
           x--;
        }
        
    }
    
    printf("%d",x);


}