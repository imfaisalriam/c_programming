#include<stdio.h>
int main()
{
    int count=0;
    float num[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%f",&num[i]);
        if (num[i]>=0)
        {
            count++;
        }
        
    }
    printf("%d valores positivos\n",count);
    
}