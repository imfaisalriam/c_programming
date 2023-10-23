#include<stdio.h>
int main()
{
    double a,b,c;
    double x,y,z;
    scanf("%lf %lf %lf",&a,&b,&c);

    if(a<=b&&a<=c)
    {
        if(a<=c)
        {
            x=a;
            if(b<=c)
            {
                y=b;
                z=c;
            }else
            {
                y=c;
                z=b;
            }
        }
    }else if(b<=c&&b<=a)
    {
        x=b;
        if(c<=a)
        {
            y=c;
            z=a;
        }else
        {
            y=a;
            z=c;
        }
    }else
    {
        x=c;
        if(b<=a)
        {
            y=b;
            z=a;
        }else
        {
            y=a;
            z=b;
        }
    
    }
    printf("z=%lf y=%lf x=%lf\n",z,y,x);

    if(z>=(y+x))
        printf("NAO FORMA TRIANGULO\n");
    else if(z*z==(y*y+x*x))
        printf("TRIANGULO RETANGULO\n");
    else if(z*z>(y*y+x*x))
        printf("TRIANGULO OBTUSANGULO\n");
    else if(z*z<(y*y+x*x))
        printf("TRIANGULO ACUTANGULO\n");

    if(z==y&&y==x&&x==z)
        printf("TRIANGULO EQUILATERO\n");
    else if(z==y||y==x||x==z)
        printf("TRIANGULO ISOSCELES\n");

    return 0;
}