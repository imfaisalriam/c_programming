#include<stdio.h>
int main()
{
    int weight,count=0;
    scanf("%d",&weight);
    for (int i = 2; i < weight; i+=2)
    {
        if (weight%i==0)
        {
            count++;
            if (count==2)
            {
                break;
            }
            
        }
        
    }
    if (count>0)
    {
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }
    
}