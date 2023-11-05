/*
============================================================================================================
                                       Author: Faisal Ahmed Riam
                             Dipertment of Computer Science and Engineering,
                    Mawlana Bhasani Science and Technology University,Tangail,Bangladesh.
============================================================================================================
*/
#include <stdio.h>
int main()
{
    int a, b, count = 0;
    scanf("%d %d", &a, &b);
    while (a<=b)
    {
        a = a * 3;
        b = b * 2;
        if (a <= b)
        {
            count++;
        }
    }
    
    printf("%d ", count + 1);

    return 0;
}