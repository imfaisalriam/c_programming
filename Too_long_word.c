#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    
    scanf("%d",&n);
    char words[100];
    getchar();

    for (int i = 0; i < n; i++)
    {
        fgets(words,sizeof(words),stdin);
        int len=strlen(words);
        if (words[len-1]=='\n')
        {
            words[len-1]='\0';
        }
        if (len>10)
        {
        printf("%c%d%c\n",words[0],len-2,words[len-1]);
        
        }else
        {
            printf("%s\n",words);
        }
        
    }
    
    
    
    
    
}
