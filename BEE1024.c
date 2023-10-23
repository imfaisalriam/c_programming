#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    do
    {
       printf("Enter N(1<=N<=1*10^4): ");
       scanf("%d",&n);
    } while (n<=1&&n>=1e4);
    do
    {
       printf("Enter M(1<=M<=1*10^3): ");
       scanf("%d",&m);
    } while (m<=1&&m>=1e3);
    
    char encryption[n][m];
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
             char ch;
            
                ch = getchar();
                if(ch=='\n')
                {
                    ch='\0';
                    break;
                }
            
                encryption[i][j] = ch;

        }
        
    }

    for (int  i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%c",encryption[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}