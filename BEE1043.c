#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if((b+c)>a&&(c+a)>b&&(a+b)>c)
    {
        float perimeter=a+b+c;
        printf("Perimetro = %.1f\n",perimeter);
    }else
    {
        float trap_area=((1.0/2)*c*(a+b));
        printf("Area = %.1f\n",trap_area);
    }
    return 0;
}