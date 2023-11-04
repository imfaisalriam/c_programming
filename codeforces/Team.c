#include<stdio.h>
int main()
{
    int num_problem,impleminted_pblm=0;
    scanf("%d",&num_problem);

    for (int i = 1; i <= num_problem; i++)
    {
        int petya,vasya,tonya;
        scanf("%d %d %d",&petya,&vasya,&tonya);
        if (petya+vasya+tonya>=2)
        {
            impleminted_pblm++;
        }
        
    }
    printf("%d",impleminted_pblm);
    

}