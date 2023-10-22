#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if((b+c)>a)
    {
        float perimeter=a+b+c;
        printf("Perimetro = %.1f",perimeter);
    }else
    {
        float trap_area=(1/2)*c*(a+b);
        printf("Area = %.1f",trap_area);
    }
}