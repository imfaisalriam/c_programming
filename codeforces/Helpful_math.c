#include <stdio.h>
#include<string.h>
int main()
{
    char math[100];
    scanf("%99s", math);
    int len =strlen(math);
    //printf("%d",len);
    for (int i = 0; i < len - 2; i += 2)
    {
        for (int j = i+2; j < len; j += 2)
        {
            if (math[i] > math[j ])
            {
                int temp = math[i];
                math[i] = math[j ];
                math[j] = temp;
            }
        }
    }
    
        for (int i = 0; i < len; i++)
        {
            printf("%c", math[i]);
        }
        
    

    return 0;
}