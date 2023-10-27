#include<stdio.h>
int main()
{
    float salary;
    scanf("%f",&salary);

    if(salary>2000.00&&salary<=3000.00)
    {
        salary=salary-2000;
        float taxe=salary*(8.0/100);
        printf("R$ %.2f\n",taxe);
    }else if(salary>3000.00&&salary<=4500.00)
    {
        float for18=salary-3000;
        float taxe1=for18*(18.0/100);
        salary=salary-(2000+for18);
        float taxe2=salary*(8.0/100);
        printf("R$ %.2f\n",taxe1+taxe2);
    }else if(salary>4500.00)
    {
        float for28=salary-4500;
        float taxe1=for28*(28.0/100);
        float for18=salary-(3000+for28);
        float taxe2=for18*(18.0/100);
        salary=salary-(2000+for18+for28);
        float taxe3=salary*(8.0/100);
        printf("R$ %.2f\n",taxe1+taxe2+taxe3);
    }else
        printf("Isento\n");
}