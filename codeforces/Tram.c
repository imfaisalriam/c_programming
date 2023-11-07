/*
============================================================================================================
                                       Author: Faisal Ahmed Riam
                             Dipertment of Computer Science and Engineering,
                    Mawlana Bhasani Science and Technology University,Tangail,Bangladesh.
============================================================================================================
*/
#include<stdio.h>
int main()
{
    int n,passenger=0;
    scanf("%d",&n);
    int capacity[n];
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        passenger+=(b[i]-a[i]);
        capacity[i]=passenger;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (capacity[i]>capacity[j])
            {
                int temp=capacity[i];
                capacity[i]=capacity[j];
                capacity[j]=temp;
            }
            
        }
        
    }
    printf("%d",capacity[n-1]);
    


    return 0;
}