#include<stdio.h>

int main()
{
    int a,b,c;
    int x,y,z;
    scanf("%d %d %d",&a,&b,&c);

    if(a<b&&a<c)
    {
        if(a<c)
        {
            x=a;
            if(b<c)
            {
                y=b;
                z=c;
            }else
            {
                y=c;
                z=b;
            }
        }
    }else if(b<c&&b<a)
    {
        x=b;
        if(c<a)
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
        if(b<a)
        {
            y=b;
            z=a;
        }else
        {
            y=a;
            z=b;
        }
    }

    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);
    printf("\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);



    return 0;
}
