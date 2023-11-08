#include<stdio.h>
int main()
{
    float current_salary;
    scanf("%f",&current_salary);
    if(current_salary>=0&&current_salary<=400.00)
    {
        float readjustment_rate=15;
        float incriment=current_salary*(readjustment_rate/100);
        float incrised_salary=current_salary+incriment;

        printf("Novo salario: %.2f\n",incrised_salary);
        printf("Reajuste ganho: %.2f\n",incriment);
        printf("Em percentual: %.0f %%\n",readjustment_rate);
    }else if(current_salary>400.00&&current_salary<=800.00)
    {
        float readjustment_rate=12;
        float incriment=current_salary*(readjustment_rate/100);
        float incrised_salary=current_salary+incriment;

        printf("Novo salario: %.2f\n",incrised_salary);
        printf("Reajuste ganho: %.2f\n",incriment);
        printf("Em percentual: %.0f %%\n",readjustment_rate);
    }else if(current_salary>800.00&&current_salary<=1200.00)
    {
        float readjustment_rate=10;
        float incriment=current_salary*(readjustment_rate/100);
        float incrised_salary=current_salary+incriment;

        printf("Novo salario: %.2f\n",incrised_salary);
        printf("Reajuste ganho: %.2f\n",incriment);
        printf("Em percentual: %.0f %%\n",readjustment_rate);
    }else if(current_salary>1200.00&&current_salary<=2000.00)
    {
        float readjustment_rate=7;
        float incriment=current_salary*(readjustment_rate/100);
        float incrised_salary=current_salary+incriment;

        printf("Novo salario: %.2f\n",incrised_salary);
        printf("Reajuste ganho: %.2f\n",incriment);
        printf("Em percentual: %.0f %%\n",readjustment_rate);
    }else if(current_salary>2000.00)
    {
        float readjustment_rate=4;
        float incriment=current_salary*(readjustment_rate/100);
        float incrised_salary=current_salary+incriment;

        printf("Novo salario: %.2f\n",incrised_salary);
        printf("Reajuste ganho: %.2f\n",incriment);
        printf("Em percentual: %.0f %%\n",readjustment_rate);
    }
    
    return 0;
}