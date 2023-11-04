#include<stdio.h>
int main()
{
    int n,k,count=0;
    scanf("%d %d",&n,&k);
    int pblm[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&pblm[i]);
        
    }
    int k_th=pblm[k];
    for (int i = 1; i <= n; i++)
    {
        
        if (pblm[i]>0&&pblm[i]>=k_th)
        {
            count++;
        }
        
    }
    printf("%d",count);
    

}